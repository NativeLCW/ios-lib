//
//  Agent.h
//  NuanceMessagingCore
//
//  Created by mithun on 1/16/18.
//  Copyright © 2018 nuance. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Agent : NSObject
    
    @property (nonatomic, strong) NSMutableArray * agentGroups;
    @property (nonatomic, strong) NSString * agentType;
    @property (nonatomic, strong) NSString * alias;
    @property (nonatomic, strong) NSMutableArray * businessUnits;
    @property (nonatomic, strong) NSString * idField;
    @property (nonatomic, strong) NSString * name;
-(instancetype)initDefault;
-(instancetype)initWithDictionary:(NSDictionary *)dictionary;
    
-(NSDictionary *)toDictionary;
    @end
