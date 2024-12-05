//
//  Automaton.h
//  NuanceMessagingCore
//
//  Created by mithun on 1/16/18.
//  Copyright © 2018 nuance. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Automaton : NSObject
    
    @property (nonatomic, assign) NSInteger agentGroup;
    @property (nonatomic, assign) NSInteger businessUnit;
    @property (nonatomic, strong) NSString * idField;
    @property (nonatomic, strong) NSString * name;
    
-(instancetype)initWithDictionary:(NSDictionary *)dictionary;
    
-(NSDictionary *)toDictionary;
    @end
