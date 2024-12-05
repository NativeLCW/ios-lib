//
//  DataCollectionEventBuilder.h
//  NuanceMessagingCore
//
//  Created by mithun on 1/18/18.
//  Copyright © 2018 nuance. All rights reserved.
//
#import <UIKit/UIKit.h>
@class DataCollectionEventBuilder;
typedef void(^DataCollectionEventBuilderBlock)(DataCollectionEventBuilder *builder);

@class DataCollectionEvent;
@class DCCustomVariable;

enum DCCustomEventAction{
    CustomEventAction_APPEND,
    CustomEventAction_SET,
    CustomEventAction_REMOVE
};

enum DCCustomEventType{
    CustomEventType_ENGAGEMENT,
    CustomEventType_APPLICATION,
    CustomEventType_VISITOR
};

@interface DataCollectionEventBuilder: NSObject {
    
}
    - (void) addCustomEvent:(NSString*)name andValue:(NSString*)value andType:(enum DCCustomEventType)type andAction:(enum DCCustomEventAction)action andIsUnique:(NSString*)unique;
    - (void) addCustomVariable:(DCCustomVariable*)customVariable;
    - (DataCollectionEvent*) build;
    - (void) addViewID:(NSString*)viewID;
    - (NSMutableArray*)getCustomEventAttrs;
    - (NSMutableArray*) getCustomVariables;
    - (NSString*) getViewID;
    @end
