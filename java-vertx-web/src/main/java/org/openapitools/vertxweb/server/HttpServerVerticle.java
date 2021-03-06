package org.openapitools.vertxweb.server;

import io.vertx.core.Future;
import io.vertx.core.Handler;
import io.vertx.core.http.HttpServerOptions;
import io.vertx.ext.web.RoutingContext;
import io.vertx.ext.web.api.contract.RouterFactoryOptions;
import io.vertx.reactivex.core.AbstractVerticle;
import io.vertx.reactivex.ext.web.api.contract.openapi3.OpenAPI3RouterFactory;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

import java.util.HashMap;
import java.util.Map;

import org.openapitools.vertxweb.server.api.DefaultApiHandler;

public class HttpServerVerticle extends AbstractVerticle {
    
    private static final Logger logger = LoggerFactory.getLogger(HttpServerVerticle.class);

    private static String specFile = "src/main/resources/openapi.yaml";

    private Map<String, Handler<RoutingContext>> operationHandlers = new HashMap<>();

    @Override
    public void start(Future<Void> fut) {
        
        new DefaultApiHandler(operationHandlers);

        OpenAPI3RouterFactory.rxCreate(vertx, specFile)
                .doOnSuccess(factory -> {
                    factory.setOptions(new RouterFactoryOptions()
                            .setRequireSecurityHandlers(false)
                            .setMountNotImplementedHandler(false));
                    factory.setValidationFailureHandler(this::validationFailureHandler);
                    operationHandlers.forEach(factory.getDelegate()::addHandlerByOperationId);
                })
                .map(OpenAPI3RouterFactory::getRouter)
                .doOnSuccess(router -> router.route().last().handler(this::methodNotFoundHandler))
                .map(router ->
                        vertx.createHttpServer(new HttpServerOptions()
                                .setPort(8080)
                                .setHost("localhost"))
                                .requestHandler(router)
                                .listen()
                )
                .subscribe( httpServer -> {
                    logger.info("Http verticle deployed successful");
                    fut.complete();
                }, error -> {
                    logger.info("Http verticle failed to deployed", error);
                    fut.fail(error.getCause());
                });
    }

    private void validationFailureHandler(io.vertx.reactivex.ext.web.RoutingContext rc) {
         rc.response().setStatusCode(400)
                 .end("Bad Request : " + rc.failure().getMessage());
    }

     private void methodNotFoundHandler(io.vertx.reactivex.ext.web.RoutingContext rc) {
         rc.response().setStatusCode(404)
                 .end("Method '" + rc.request().path() + "' Not Found");
     }
}
