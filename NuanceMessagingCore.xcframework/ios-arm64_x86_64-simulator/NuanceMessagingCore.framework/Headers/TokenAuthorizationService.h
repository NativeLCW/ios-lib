//
//  TokenAuthorizationService.h
//  IOS MVP
//
//  Created by mithun on 9/21/17.
//  Copyright © 2017 nuance. All rights reserved.
//


#import "PostRequest.h"
#import "Response.h"
@interface TokenAuthorizationService : PostRequest {
    NSString *_accessToken;
    NSString *_clientID;
    NSString *_clientSecret;
    long _tokenExpires;
    NSDate *_lastTokenFetched;
    NSMutableArray *comHandlerArray;
    BOOL isRequestProgress;
}

@property(nonatomic, readwrite) NSString *accessToken;
@property(nonatomic, readwrite) long tokenExpires;
@property(nonatomic, readwrite) NSDate *lastTokenFetched;

@property(nonatomic, readwrite, copy) NSString *clientID;
@property(nonatomic, readwrite, copy) NSString *clientSecret;
@property(nonatomic, copy) void (^completionhandler)(Response* success, Response *error);
- (void) generateAccessToken:(void (^)(Response* success, Response *error))completionBlock;
- (BOOL) hasTokenExpired;
- (void) clear;

@end
