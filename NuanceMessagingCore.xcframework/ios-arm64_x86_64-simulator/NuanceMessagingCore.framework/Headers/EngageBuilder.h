//
//  EngageBuilder.h
//  IOS MVP
//
//  Created by mithun on 9/25/17.
//  Copyright © 2017 nuance. All rights reserved.
//

#import <Foundation/Foundation.h>



typedef enum{
    TABLET=1,
    MOBILE
}LaunchType;

typedef enum {
    CALL=1,
    MESSAGING
} EngageType;


@class EngageBuilder;
typedef void(^EngageBuilderBlock)(EngageBuilder *builder);

@class Engage;

@interface EngageBuilder : NSObject {
    NSString *stID;
    NSString *buID;
    NSString *agID;
    NSString *brID;
    NSString *initialMsg;
    NSString *brName;
    long long auID;
    NSString *openerMsg;
    long long pID;
    long pty;
    long long qMID;
    double qt;
    NSString *sID;
    NSDictionary *aAttrs;
    NSString *brAttrs;
    LaunchType type;
    NSString *pNumber;
    NSString *autoDataPass;
    NSString *autoDataMap;
    BOOL isAsync;
}

@property(nonatomic, copy) NSString* siteID;
@property(nonatomic, copy) NSString* businessUnitID;
@property(nonatomic, copy) NSString* agentGroupID;
@property(nonatomic, copy) NSString* businessRuleID;
@property(nonatomic, copy) NSString* initialMessage;
@property(nonatomic, copy) NSString* businessRuleName;
@property(nonatomic) long long automationID;
@property(nonatomic,copy) NSString* openerMessage;
@property(nonatomic) long long pageID;
@property(nonatomic) long priority;
@property(nonatomic) long long queueMessagingSpecID;
@property(nonatomic) double queueThreshold;
@property(nonatomic, copy) NSString* scriptID;
@property(nonatomic,copy) NSDictionary* agentAttributes;
@property(nonatomic, copy) NSString* brAttributes;
@property(nonatomic) LaunchType launchType;
@property(nonatomic, copy) NSString *phoneNumber;
@property(nonatomic) BOOL asyncEngagement;
@property(nonatomic) NSString *automatonDataPass;
@property(nonatomic) NSString *automatonDataMap;

- (Engage*) build:(EngageType) etype;


@end
