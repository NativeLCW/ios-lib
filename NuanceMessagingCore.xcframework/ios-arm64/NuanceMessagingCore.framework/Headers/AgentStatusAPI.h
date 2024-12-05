//
//  AgentStatusAPI.h
//  IOS MVP
//
//  Created by mithun on 9/26/17.
//  Copyright © 2017 nuance. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "GetRequest.h"
#import "AgentStatusResponse.h"
#import "AgentAvailabilityBuilder.h"


@interface AgentStatusAPI : GetRequest {
    NSString * siteID;
    NSString * businessUnitID;
    NSString * agentGroupID;
    long  queueThreshold;
    NSDictionary *agentAttributes;
}

- (instancetype)initWithBlock:(AgentAvailabilityBuilderBlock)block;
- (instancetype)initWithBuilder:(AgentAvailabilityBuilder*) builder;

@property(nonatomic, copy) void (^completionhandler)(AgentStatusResponse* success, Response *error);
- (void)getAgentAvailabilityStatus:(void (^)(AgentStatusResponse* success, Response *error))completionBlock;
@end
