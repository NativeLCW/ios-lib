//
//  CustomerMessageAPI.h
//  IOS MVP
//
//  Created by mithun on 9/26/17.
//  Copyright © 2017 nuance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PostRequest.h"
#import "Response.h"

@interface CustomerMessagAPI : PostRequest {
    
}
@property(nonatomic, copy) void (^completionhandler)(Response* success, Response *error);
- (void)sendCustomerMessage:(NSString *)message andRichData:(NSString*)data andReceipt:(NSString*)receipt;
- (void)sendCustomerMessage:(NSString *)message andCompletion:(void (^)(Response *, Response *))completionBlock;

- (void)sendCustomerMessage:(NSString *)message andRichData:(NSString *)data andReceipt:(NSString *)receipt andCompletion:(void (^)(Response *, Response *))completionBlock;

- (void)sendNinaCustomerMessage:(NSString *)message attributes:(NSDictionary*)attributes;
- (void)sendSystemMessage:(NSString*)message;
- (void)sendActivityMesage:(NSString*)activity;

@end
