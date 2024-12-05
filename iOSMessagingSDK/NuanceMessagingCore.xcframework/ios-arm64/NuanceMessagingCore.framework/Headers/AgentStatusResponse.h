//
//  AgentStatusResponse.h
//  IOS MVP
//
//  Created by mithun on 9/26/17.
//  Copyright © 2017 nuance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Response.h"

@interface AgentStatusResponse : Response {
    BOOL _inHOP;
    NSString *_status;
    BOOL _availability;
}

@property(nonatomic) BOOL inHOP;
@property(nonatomic, copy) NSString *status;
@property(nonatomic) BOOL availability;


@end
