//
//  NGButtonWidgetData.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGWidgetBaseData.h"

typedef NS_ENUM(NSUInteger, NGButtonType) {
    NGButtonType_None,
    NGButtonType_End,
    NGButtonType_Reset,
    NGButtonType_Cancel,
    NGButtonType_Submit,
    NGButtonType_OnClick
};

@interface NGButtonWidgetData : NGWidgetBaseData

@property (nonatomic, copy) NSString *actionType;
@property (nonatomic, assign) NGButtonType enumType;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, strong) NSNumber *isClicked;
@property (nonatomic, strong) NSObject *context;
@property (nonatomic, strong) NSString *style;
@property (nonatomic, strong) NSString *size;
@property (nonatomic, strong) NSString *align;
@property (nonatomic) NSInteger containerSize;
@property (nonatomic, copy) NSDictionary *contextDic;
@property (nonatomic, copy) NSString *contextString;

@end

