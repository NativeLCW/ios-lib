//
//  PendingMessageAPI.h
//  NuanceMessagingCore
//
//  Created by Mithun on 3/21/19.
//  Copyright © 2019 nuance. All rights reserved.
//

#import "GetRequest.h"
#import "PendingMessageResponse.h"

@interface PendingMessagesAPI: GetRequest {
    
}
@property(nonatomic, copy) void (^completionhandler)(PendingMessageResponse *response);
- (void) hasPendingMessages: (NSString*)siteID andCompletionHandler:(void (^)(PendingMessageResponse *response))completionBlock;
@end
