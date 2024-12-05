//
//  VisitsContainer.h
//  NuanceMessagingCore
//
//  Created by mithun on 1/16/18.
//  Copyright © 2018 nuance. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Visit.h"

@interface VisitsContainer : NSObject
    
    @property (nonatomic, strong) NSString * persistence;
    @property (nonatomic, strong) NSMutableArray * visits;
    -(instancetype)initDefault;
-(instancetype)initWithDictionary:(NSDictionary *)dictionary;
    
-(NSDictionary *)toDictionary;
    -(void)addNewVisit:(Visit*)visit;
    @end
