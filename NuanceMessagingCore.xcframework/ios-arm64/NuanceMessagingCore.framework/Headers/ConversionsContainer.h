//
//  ConversionsContainer.h
//  NuanceMessagingCore
//
//  Created by mithun on 1/16/18.
//  Copyright © 2018 nuance. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Conversion.h"

@interface ConversionsContainer : NSObject
    
    @property (nonatomic, strong) NSMutableArray * conversions;
    @property (nonatomic, strong) NSString * persistence;
-(instancetype)initDefault;
-(instancetype)initWithDictionary:(NSDictionary *)dictionary;
    
-(NSDictionary *)toDictionary;
    @end
