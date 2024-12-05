//
//  CloseMessagingAPI.h
//  IOS MVP
//
//  Created by mithun on 9/26/17.
//  Copyright © 2017 nuance. All rights reserved.
//
#import "PostRequest.h"
#import "Response.h"

@interface CloseMessagingAPI : PostRequest {
    
}
@property(nonatomic, copy) void (^completionhandler)(Response* success, Response *error);
- (void)sendCloseMessage;
- (void)sendCloseMessage:(void (^)(Response *, Response *))completionBlock;

@end
