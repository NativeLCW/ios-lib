//
//  Visit.h
//  NuanceMessagingCore
//
//  Created by mithun on 1/16/18.
//  Copyright © 2018 nuance. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ApplicationAttributes.h"

@interface Visit : NSObject
    
    @property (nonatomic, strong) NSString * oS;
    @property (nonatomic, strong) ApplicationAttributes * applicationAttributes;
    @property (nonatomic, strong) NSString * browserType;
    @property (nonatomic, strong) NSString * deviceType;
    @property (nonatomic, assign) NSInteger endDate;
    @property (nonatomic, assign) NSInteger lastUpdatedDate;
    @property (nonatomic, strong) NSString * sessionID;
    @property (nonatomic, assign) NSInteger startDate;
    
-(instancetype)initWithDictionary:(NSDictionary *)dictionary;
    
-(NSDictionary *)toDictionary;
    @end
