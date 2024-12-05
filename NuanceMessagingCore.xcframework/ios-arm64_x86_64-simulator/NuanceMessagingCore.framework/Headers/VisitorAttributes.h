//
//  VisitorAttributes.h
//  NuanceMessagingCore
//
//  Created by mithun on 1/16/18.
//  Copyright © 2018 nuance. All rights reserved.
//
#import <Foundation/Foundation.h>
@interface VisitorAttribute : NSObject
    
    @property (nonatomic, strong) NSMutableDictionary * additionalProperties;
-(instancetype)initDefault;
-(instancetype)initWithDictionary:(NSDictionary *)dictionary;
    
-(NSDictionary *)toDictionary;
- (void) addVisitorAttribute:(NSString *)name andValue:(NSSet *)value;
    @end
