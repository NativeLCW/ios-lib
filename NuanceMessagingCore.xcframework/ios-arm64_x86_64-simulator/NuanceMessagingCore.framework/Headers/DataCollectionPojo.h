//
//  DataCollectionPojo.h
//  NuanceMessagingCore
//
//  Created by mithun on 1/18/18.
//  Copyright © 2018 nuance. All rights reserved.
//
#import <UIKit/UIKit.h>

@interface DataCollectionPojo: NSObject {
    
}
    @property (nonatomic, strong) NSString * tcCustomerID;
    @property (nonatomic, assign) NSInteger siteID;
    @property (nonatomic, strong) NSString *sessionID;
    @property (nonatomic, strong) NSString *clientOrderNumber;
    @property (nonatomic, strong) NSString *orderType;
    @property (nonatomic, strong) NSString *viewID;
    @property (nonatomic, strong) NSString *businessUnitID;
    @property (nonatomic, strong) NSString *agentGroupID;
    @property (nonatomic, strong) NSString *businessRuleID;
    @property (nonatomic, strong) NSString *engagementID;
    @property (nonatomic, strong) NSMutableArray *products;
    @property (nonatomic, strong) NSMutableArray *conversionAttributes;
    @property (nonatomic, strong) NSMutableArray *attributes;
    @property (nonatomic, strong) NSMutableArray *customVariables;
    @end

