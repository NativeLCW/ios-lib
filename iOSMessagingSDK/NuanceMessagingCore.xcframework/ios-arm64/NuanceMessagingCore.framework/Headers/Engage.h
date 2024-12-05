//
//  Engage.h
//  IOS MVP
//
//  Created by mithun on 9/25/17.
//  Copyright © 2017 nuance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EngageStatusResponse.h"
#import "GetRequest.h"
#import "EngageBuilder.h"

@interface Engage : GetRequest {
    NSString *siteID;
    NSString *businessUnitID;
    NSString *agentGroupID;
    NSString *businessRuleID;
    NSString *initialMessage;
    NSString *businessRuleName;
    long long automationID;
    NSString *launchType;
    NSString *openerMessage;
    long long pageID;
    long priority;
    long long qMsgSpecID;
    double qThreshold;
    NSString *scriptID;
    NSString *phoneNumber;
    BOOL isAsync;
    NSString *autoDataPass;
    NSString *autoDataMap;
    NSDictionary *agentAttributes;
    NSString *brAttributes;
    BOOL requestProgress;
   
}

@property(nonatomic, copy) void (^completionhandler)(EngageStatusResponse* success, Response *error);

-(void) startNewEngagement:(void (^)(EngageStatusResponse* success, Response *error))completionBlock;

-(void) startNewHybridEngagement:(NSString*)initialMsg andOpenerMessage:(NSString*) opener andCompletionHandler:(void (^)(EngageStatusResponse* success, Response *error))completionBlock;

-(void) initializeParams:(EngageBuilder*)builder;

-(void) clear;


@end
