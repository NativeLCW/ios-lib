//
//  DataPassAPI.h
//  IOS MVP
//
//  Created by mithun on 9/26/17.
//  Copyright © 2017 nuance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PostRequest.h"
#import "DataPassBuilder.h"
#import "Response.h"

@interface DataPassAPI : PostRequest {
    NSDictionary *dataPassDictionary;
    NSString *autodp;
}

- (instancetype)initWithBlock:(DataPassBuilderBlock)block;
- (instancetype)initWithBuilder:(DataPassBuilder*) builder;
@property(nonatomic, copy) void (^completionhandler)(Response* success, Response *error);
- (void)sendDataPass:(void (^)(Response* success, Response *error))completionBlock;
@end
