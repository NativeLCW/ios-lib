//
//  CustomerTypingAPI.h
//  IOS MVP
//
//  Created by mithun on 9/26/17.
//  Copyright © 2017 nuance. All rights reserved.
//
#import "PostRequest.h"

@interface CustomerTypingAPI : PostRequest {
    
}
- (void) sendCustomerTypingStatus:(BOOL) isTyping;
@end
