//
//  NGInputWidgetData.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGWidgetBaseData.h"

typedef NS_ENUM(NSUInteger, NGInputKeyBoardType) {
    NGInputKeyBoardType_Default = 0,
    NGInputKeyBoardType_Text,
    NGInputKeyBoardType_Email,
    NGInputKeyBoardType_Phone,
    NGInputKeyBoardType_Date,
    NGInputKeyBoardType_Number,
};

@interface NGInputWidgetData : NGWidgetBaseData

@property (nonatomic, copy) NSString *actionType;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, assign) NGInputKeyBoardType keyboardType;
@property (nonatomic,copy) NSDictionary *context;
@property (nonatomic,copy) NSDictionary *controlContext;
@property (nonatomic,copy) NSString *style;
@property (nonatomic,copy) NSString *helpText;
@property (nonatomic, copy) NSString *dateFormat;
@end
