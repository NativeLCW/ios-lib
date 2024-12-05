//
//  SessionManager.h
//  NuanceMessagingCore
//
//  Copyright © 2018 nuance. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "RequestHandler.h"
#import "ResponseHandler.h"

/**
 If body type is "raw", use "SessionManager", else use "JsonSessionManager".
 */

typedef void (^SuccessBlock)(NSURLSessionDataTask * _Nonnull task, id _Nullable);
typedef void (^FailureBlock)(NSURLSessionDataTask * _Nullable task, NSError * _Nullable);
typedef void (^UploadBlock)(NSURLResponse * _Nonnull, id _Nullable, NSError * _Nullable);
typedef void (^ProgressBlock)(NSProgress * _Nonnull);
typedef void (^FileUploadProgressBlock)(NSProgress * _Nonnull);

@interface SessionManager : NSObject <NSURLSessionTaskDelegate>

@property (nonatomic, strong) RequestHandler * _Nullable reqHandler;
@property (nonatomic, strong) ResponseHandler * _Nullable resHandler;
@property (nonatomic, strong) NSURLSession * _Nonnull session;

#pragma mark - GET
- (void)GET:(NSString *_Nonnull)URLString
queryParams:(NSDictionary *_Nullable)qps
 parameters:(id _Nullable )parameters
   progress:(void (^_Nullable)(NSProgress * _Nonnull))downloadProgress
    success:(void (^_Nullable)(NSURLSessionDataTask * _Nonnull, id _Nullable))success
    failure:(void (^_Nullable)(NSURLSessionDataTask * _Nullable, NSError * _Nonnull))failure;

#pragma mark - POST
- (void)POST:(NSString *_Nonnull)URLString
 queryParams:(NSDictionary *_Nullable)qps
  parameters:(NSDictionary *_Nullable)parameters
    progress:(void (^_Nullable)(NSProgress * _Nonnull))uploadProgress
     success:(void (^_Nullable)(NSURLSessionDataTask * _Nonnull, id _Nullable))success
     failure:(void (^_Nullable)(NSURLSessionDataTask * _Nullable, NSError * _Nonnull))failure;

- (void)POST:(NSString *_Nonnull)URLString
  parameters:(id _Nullable )parameters
     success:(void (^_Nullable)(NSURLSessionDataTask * _Nonnull, id _Nullable))success
     failure:(void (^_Nullable)(NSURLSessionDataTask * _Nullable, NSError * _Nonnull))failure;

- (void)uploadTaskWithURL:(NSString *_Nonnull)URLString
              queryParams:(NSDictionary *_Nullable)qps
              fileContent:(NSData *_Nullable)data
                 fileName:(NSString *_Nullable)fileName
                 progress:(void (^_Nullable)(NSProgress * _Nonnull))uploadProgressBlock
        completionHandler:(void (^_Nullable)(NSURLResponse * _Nonnull, id _Nullable, NSError * _Nullable))completionHandler;

@end


@interface API : NSObject

@property (nonatomic, weak) SessionManager * _Nullable sessionManager;

@end


@interface NSString (MIMEType)

- (NSString *_Nullable)MIMEType;

@end
