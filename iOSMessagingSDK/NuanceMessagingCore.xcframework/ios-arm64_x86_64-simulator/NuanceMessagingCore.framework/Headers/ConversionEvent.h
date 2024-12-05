//
//  ConversionEvent.h
//  NuanceMessagingCore
//
//  Created by mithun on 1/19/18.
//  Copyright © 2018 nuance. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ConversionEventBuilder.h"
#import "DataCollectionPojo.h"

@interface ConversionEvent: NSObject
    - (instancetype)initWithBlock:(ConversionEventBuilderBlock)block;
    - (instancetype)initWithBuilder:(ConversionEventBuilder*) builder;
    - (DataCollectionPojo*)getDataCollection;
@end
