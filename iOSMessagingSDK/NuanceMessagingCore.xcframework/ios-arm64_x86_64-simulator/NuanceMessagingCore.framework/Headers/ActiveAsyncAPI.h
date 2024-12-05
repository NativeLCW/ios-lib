//
//  ActiveAsyncAPI.h
//  NuanceMessagingCore
//
//  Created by Mithun on 3/21/19.
//  Copyright © 2019 nuance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GetRequest.h"
#import "AsyncTranscriptAPI.h"
#import "GetMessageResponse.h"
#import "ActiveAsyncResponse.h"
@interface ActiveAsyncAPI: GetRequest {
    
}
@property(nonatomic, copy) void (^completionhandler)(ActiveAsyncResponse *response);
-(void)checkActiveConversations:(NSString*)siteID andBusinessUnitID:(NSString*)buID andCompletionHandler:(void (^)(ActiveAsyncResponse *response))completionBlock;
@end
