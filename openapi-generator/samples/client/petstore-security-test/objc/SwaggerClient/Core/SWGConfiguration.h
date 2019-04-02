#import <Foundation/Foundation.h>

@class SWGLogger;

/**
* Swagger Petstore *_/ ' \" =end -- \\r\\n \\n \\r
* This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\  *_/ ' \" =end --       
*
* OpenAPI spec version: 1.0.0 *_/ ' \" =end -- \\r\\n \\n \\r
* Contact: apiteam@swagger.io *_/ ' \" =end -- \\r\\n \\n \\r
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


static NSString * const kSWGAPIVersion = @"1.0.0";

@protocol SWGConfiguration <NSObject>

/**
 * Api logger
 */
@property (readonly, nonatomic) SWGLogger *logger;

/**
 * Base url
 */
@property (readonly, nonatomic) NSString *host;

/**
 * Api key values for Api Key type Authentication
 */
@property (readonly, nonatomic) NSDictionary *apiKey;

/**
 * Api key prefix values to be prepend to the respective api key
 */
@property (readonly, nonatomic) NSDictionary *apiKeyPrefix;

/**
 * Username for HTTP Basic Authentication
 */
@property (readonly, nonatomic) NSString *username;

/**
 * Password for HTTP Basic Authentication
 */
@property (readonly, nonatomic) NSString *password;

/**
 * Access token for OAuth
 */
@property (readonly, nonatomic) NSString *accessToken;

/**
 * Temp folder for file download
 */
@property (readonly, nonatomic) NSString *tempFolderPath;

/**
 * Debug switch, default false
 */
@property (readonly, nonatomic) BOOL debug;

/**
 * SSL/TLS verification
 * Set this to NO to skip verifying SSL certificate when calling API from https server
 */
@property (readonly, nonatomic) BOOL verifySSL;

/**
 * SSL/TLS verification
 * Set this to customize the certificate file to verify the peer
 */
@property (readonly, nonatomic) NSString *sslCaCert;

/**
 * Authentication Settings
 */
@property (readonly, nonatomic) NSDictionary *authSettings;

/**
* Default headers for all services
*/
@property (readonly, nonatomic, strong) NSDictionary *defaultHeaders;

@end
