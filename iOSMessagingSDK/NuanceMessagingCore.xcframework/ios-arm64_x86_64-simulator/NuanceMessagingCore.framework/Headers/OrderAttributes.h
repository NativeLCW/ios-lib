//
//  OrderAttributes.h
//  NuanceMessagingCore
//
//  Created by mithun on 1/16/18.
//  Copyright © 2018 nuance. All rights reserved.
//
#import <UIKit/UIKit.h>

@interface OrderAttributes : NSObject
    
    @property (nonatomic, strong) NSDictionary * additionalProperties;

-(instancetype) init;
-(instancetype)initWithDictionary:(NSDictionary *)dictionary;
    
-(NSDictionary *)toDictionary;
    @end
