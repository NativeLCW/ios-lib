//
//  Conversion.h
//  NuanceMessagingCore
//
//  Created by mithun on 1/16/18.
//  Copyright © 2018 nuance. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OrderAttributes.h"
#import "Product.h"

@interface Conversion : NSObject
    
    @property (nonatomic, assign) NSInteger conversionDate;
    @property (nonatomic, assign) CGFloat conversionUnit;
    @property (nonatomic, strong) OrderAttributes * orderAttributes;
    @property (nonatomic, strong) NSString * orderID;
    @property (nonatomic, strong) NSString * orderType;
    @property (nonatomic, strong) NSMutableArray * products;
    @property (nonatomic, assign) CGFloat totalConversionValue;
    
-(instancetype)initWithDictionary:(NSDictionary *)dictionary;
    
-(NSDictionary *)toDictionary;
    @end
