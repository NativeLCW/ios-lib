//
//  EngagementAttributes.h
//  NuanceMessagingCore
//
//  Created by mithun on 1/16/18.
//  Copyright © 2018 nuance. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface EngagementAttributes : NSObject
    
    @property (nonatomic, strong) NSMutableDictionary * additionalProperties;
-(instancetype) init;
    
-(instancetype)initWithDictionary:(NSDictionary *)dictionary;
    
-(NSDictionary *)toDictionary;
    @end

