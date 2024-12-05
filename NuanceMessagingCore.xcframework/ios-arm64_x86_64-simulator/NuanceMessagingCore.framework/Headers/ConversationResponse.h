//
//  ConversationResponse.h
//  NuanceMessagingCore
//
//  Created by Mithun on 2/25/19.
//  Copyright © 2019 nuance. All rights reserved.
//

#import "Response.h"
#import "MessageTypes.h"

@interface ConversationResponse : Response {
    NSMutableArray *message;
    BOOL active;
}
- (NSMutableArray*) getMessages;
- (void) setMessage:(NSMutableArray*) messages;
- (void) setActive:(NSString*) outcome;
- (BOOL) isActive;

@end
