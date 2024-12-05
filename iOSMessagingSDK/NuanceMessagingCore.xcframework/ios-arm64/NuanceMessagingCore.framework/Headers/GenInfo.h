//
//  GenInfo.h
//  NuanceMessagingCore
//
//  Created by mithun on 1/16/18.
//  Copyright © 2018 nuance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "CustomVariable.h"
#import "VisitorAttributes.h"

@interface GenInfo : NSObject
    
    @property (nonatomic, strong) NSString * idField;
    @property (nonatomic, assign) NSInteger conversionCount;
    @property (nonatomic, strong) NSMutableArray * customVariables;
    @property (nonatomic, assign) NSInteger firstVisitDate;
    @property (nonatomic, assign) NSInteger frequency;
    @property (nonatomic, assign) NSInteger lastVisitDate;
    @property (nonatomic, assign) CGFloat loyalty;
    @property (nonatomic, assign) NSInteger penultimateVisitDate;
    @property (nonatomic, assign) NSInteger recency;
    @property (nonatomic, assign) CGFloat totalConversionValue;
    @property (nonatomic, assign) NSInteger totalVisitingTime;
    @property (nonatomic, strong) VisitorAttribute * visitorAttributes;
-(instancetype)initDefault;

-(instancetype)initWithDictionary:(NSDictionary *)dictionary;
    
-(NSDictionary *)toDictionary;
    @end
