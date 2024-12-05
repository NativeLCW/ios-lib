//
//  AgentAvailabilityBuilder.h
//  IOS MVP
//
//  Created by mithun on 9/26/17.
//  Copyright © 2017 nuance. All rights reserved.
//

#import <Foundation/Foundation.h>




@class AgentAvailabilityBuilder;
typedef void(^AgentAvailabilityBuilderBlock)(AgentAvailabilityBuilder *builder);

@class AgentStatusAPI;

@interface AgentAvailabilityBuilder : NSObject {
    NSString *_siteID;
    NSString *_businessUnitID;
    NSString *_agentGroupID;
    long _queueThreshold;
    NSDictionary *_agentAttributes;
}

@property(nonatomic, copy) NSString *siteID;
@property(nonatomic, copy) NSString *businessUnitID;
@property(nonatomic, copy) NSString *agentGroupID;
@property(nonatomic) long queueThreshold;
@property(nonatomic, copy) NSDictionary *agentAttributes;


- (AgentStatusAPI*) build;
@end
