//
//  Rule.h
//  NuanceMessagingCore
//
//  Created by mithun on 2/1/18.
//  Copyright © 2018 nuance. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "NSOrderedDictionary.h"

@interface Rules : NSObject

@property (nonatomic, strong) NSMutableArray * businessRules;
@property (nonatomic, strong) NSMutableDictionary * constants;

-(instancetype)initWithDictionary:(NSOrderedDictionary *)dictionary;

-(NSDictionary *)toDictionary;
@end
