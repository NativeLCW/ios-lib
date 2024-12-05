//
//  AssitedEventAPI.h
//  NuanceMessagingCore
//
//  Created by Mithun on 6/22/18.
//  Copyright © 2018 nuance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PostRequest.h"

@interface AssistedEventAPI : PostRequest {
    
}
- (void)sendAssistedEvent:(NSString*)brID;

@end
