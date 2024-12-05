//
//  EmailTranscriptAPI.h
//  IOS MVP
//
//  Created by mithun on 9/27/17.
//  Copyright © 2017 nuance. All rights reserved.
//

#import "PostRequest.h"
#import "EmailTranscriptBuilder.h"
#import "Response.h"

@interface EmailTranscriptAPI : PostRequest {
    NSString *customerName;
    NSString *emailAddress;
    NSString *emailSpecID;
}

- (instancetype)initWithBlock:(EmailTranscriptBuilderBlock)block;
- (instancetype)initWithBuilder:(EmailTranscriptBuilder*) builder;
@property(nonatomic, copy) void (^completionhandler)(Response* success, Response *error);
- (void)emailTranscript:(void (^)(Response* success, Response *error))completionBlock;
@end
