//
//  ActiveAsyncResponse.h
//  NuanceMessagingCore
//
//  Created by Mithun on 3/21/19.
//  Copyright © 2019 nuance. All rights reserved.
//

#import "Response.h"
@interface ActiveAsyncResponse : Response {
   
    BOOL active;
}

- (void) setActive:(BOOL) outcome;
- (BOOL) isActive;
@end

