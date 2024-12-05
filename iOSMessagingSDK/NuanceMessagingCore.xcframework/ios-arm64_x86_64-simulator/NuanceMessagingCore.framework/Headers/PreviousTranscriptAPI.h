//
//  PreviousTranscriptAPI.h
//  NuanceMessagingCore
//
//  Created by mithun on 2/6/18.
//  Copyright © 2018 nuance. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "GetRequest.h"
#import "GetMessageResponse.h"

@interface PreviousTranscriptAPI : GetRequest {
    
}

@property(nonatomic, copy) void (^completionhandler)(NSDictionary* respData, long status);
- (void) getPreviousMessages:(void (^)(NSDictionary* messages,long status))completionBlock;

@end
