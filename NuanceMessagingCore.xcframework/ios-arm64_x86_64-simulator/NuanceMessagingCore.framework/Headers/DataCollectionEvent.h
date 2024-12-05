//
//  DataCollectionEvent.h
//  NuanceMessagingCore
//
//  Created by mithun on 1/18/18.
//  Copyright © 2018 nuance. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DataCollectionEventBuilder.h"
#import "DataCollectionPojo.h"


@interface DataCollectionEvent: NSObject
    - (instancetype)initWithBlock:(DataCollectionEventBuilderBlock)block;
    - (instancetype)initWithBuilder:(DataCollectionEventBuilder*) builder;
    - (DataCollectionPojo*)getDataCollection;
@end
