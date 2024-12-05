//
//  NGGuideEventType.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGEnumBaseData.h"

typedef NS_ENUM (NSUInteger, NGGuideEventType) {
    ON_ITEM_CHECKED = 1,
    ON_KEY_ENTER,
    ON_OPTION_CHANGED,
    ON_ITEM_SELECTED,
    ON_TEXT_FOCUS_OUT,
    ON_CLICK,
    ON_TEXT_CHANGED,
    ON_ITEM_CLICKED
};
@interface NGGuideEventTypeEnum : NGEnumBaseData

@end
