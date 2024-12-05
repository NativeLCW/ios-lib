//
//  PendingMessageResponse.h
//  NuanceMessagingCore
//
//  Created by Mithun on 3/21/19.
//  Copyright © 2019 nuance. All rights reserved.
//

#import "Response.h"
@interface PendingMessageResponse: Response {
    BOOL pending;
}

- (void) setPending:(BOOL) outcome;
- (BOOL) hasPending;

@end
