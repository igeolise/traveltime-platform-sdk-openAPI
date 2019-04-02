-module(traveltimeplatform_auth).

-export([authorize_api_key/5]).

-spec authorize_api_key(
    LogicHandler :: atom(),
    OperationID :: traveltimeplatform_api:operation_id(),
    From :: header | qs_val,
    KeyParam :: iodata() | atom(),
    Req ::cowboy_req:req()
)-> {true, Context :: #{binary() => any()}, Req ::cowboy_req:req()} |
    {false, AuthHeader :: binary(), Req ::cowboy_req:req()}.

authorize_api_key(LogicHandler, OperationID, From, KeyParam, Req0) ->
    {ApiKey, Req} = get_api_key(From, KeyParam, Req0),
    case ApiKey of
        undefined ->
            AuthHeader = <<"">>,
            {false, AuthHeader, Req};
        _ ->
            Result = traveltimeplatform_logic_handler:authorize_api_key(
                LogicHandler,
                OperationID,
                ApiKey
            ),
            case Result of
                {true, Context}  ->
                    {true, Context, Req};
                {true, Context}  ->
                    {true, Context, Req};
                false ->
                    AuthHeader = <<"">>,
                    {false, AuthHeader, Req}
            end
    end.

get_api_key(header, KeyParam, Req0) ->
    {Headers, Req} = cowboy_req:headers(Req0),
    {
        openapi_utils:get_opt(
            traveltimeplatform_utils:to_header(KeyParam),
            Headers
        ),
        Req
    };

get_api_key(qs_val, KeyParam, Req0) ->
    {QS, Req} = cowboy_req:qs_vals(Req0),
    { traveltimeplatform_utils:get_opt(KeyParam, QS), Req}.



