//
//  ConversionEventBuilder.h
//  NuanceMessagingCore
//
//  Created by mithun on 1/19/18.
//  Copyright © 2018 nuance. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ConversionEventBuilder;
typedef void(^ConversionEventBuilderBlock)(ConversionEventBuilder *builder);

@class DataCollectionEvent;
@class ConversionEvent;
@interface ConversionEventBuilder:NSObject

    
    -(void)addConversionEvent:(NSString*)productName andProductCount:(NSInteger)count andProductType:(NSString*)type andProductValue:(CGFloat)value andProductAttrs:(NSDictionary<NSString*,NSString*>*)productAttr;
    -(void)addConversionAttributes:(NSString*)name andValue:(NSString*)value;
    -(void)addCustomEventAttrs:(DataCollectionEvent*)customEvent;
    -(void)addOrderID:(NSString*)orderID;
    -(void)addOrderType:(NSString*)orderType;
    - (ConversionEvent*) build;
    -(NSMutableArray*)getProducts;
    -(NSMutableArray*)getConversionAttrs;
    -(NSMutableArray*)getCustomEventAttrs;
    -(NSMutableArray*)getCustomVariables;
    -(NSString*)getViewID;
@end
