//
//  Engagement.h
//  NuanceMessagingCore
//
//  Created by mithun on 1/16/18.
//  Copyright © 2018 nuance. All rights reserved.
//

#import "Agent.h"
#import "Automaton.h"
#import "EngagementAttributes.h"
#import "RoutingAttributes.h"

@interface Engagement : NSObject
    
    @property (nonatomic, assign) BOOL abandoned;
    @property (nonatomic, strong) NSArray * agentGroups;
    @property (nonatomic, assign) NSInteger agentLineCount;
    @property (nonatomic, strong) NSArray * agents;
    @property (nonatomic, strong) NSArray * automatons;
    @property (nonatomic, strong) NSString * businessRuleName;
    @property (nonatomic, strong) NSString * businessRuleType;
    @property (nonatomic, strong) NSArray * businessUnits;
    @property (nonatomic, assign) BOOL cobrowse;
    @property (nonatomic, assign) BOOL conference;
    @property (nonatomic, assign) NSInteger customerLineCount;
    @property (nonatomic, strong) NSString * deviceType;
    @property (nonatomic, strong) EngagementAttributes * engagementAttributes;
    @property (nonatomic, assign) NSInteger engagementEndDate;
    @property (nonatomic, strong) NSString * engagementID;
    @property (nonatomic, assign) NSInteger engagementStartDate;
    @property (nonatomic, assign) BOOL escalated;
    @property (nonatomic, assign) NSInteger lastUpdatedDate;
    @property (nonatomic, strong) RoutingAttributes * routingAttributes;
    @property (nonatomic, assign) BOOL salesQualified;
    @property (nonatomic, assign) NSInteger salesQualifiedDate;
    @property (nonatomic, assign) BOOL transferred;
    
-(instancetype)initWithDictionary:(NSDictionary *)dictionary;
    
-(NSDictionary *)toDictionary;
    @end
