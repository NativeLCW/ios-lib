//
//  Product.h
//  NuanceMessagingCore
//
//  Created by mithun on 1/16/18.
//  Copyright © 2018 nuance. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ProductAttributes.h"

@interface Product : NSObject
    
    @property (nonatomic, assign) NSInteger count;
    @property (nonatomic, strong) ProductAttributes * productAttributes;
    @property (nonatomic, strong) NSString * productName;
    @property (nonatomic, strong) NSString * productType;
    @property (nonatomic, assign) CGFloat value;
    
-(instancetype)initWithDictionary:(NSDictionary *)dictionary;
    
-(NSDictionary *)toDictionary;
    @end
