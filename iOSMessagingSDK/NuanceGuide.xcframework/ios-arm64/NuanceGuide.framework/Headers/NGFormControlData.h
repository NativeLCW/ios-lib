//
//  NGFormControlData.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGBaseData.h"
#import "NGGuideRender.h"


@protocol NGWidgetBaseData;
//@class NGGuideRender;

@interface NGFormControlData : NGBaseData

@property (nonatomic, copy) NSString           *elementName;
@property (nonatomic, copy) NSString           *label;
@property (nonatomic, strong) NSArray          *widgetList;
@property (nonatomic, strong) NSString          *containerAlign;
@property (nonatomic, strong) NSString          *containerSeparator;
@property (nonatomic) NSUInteger         containerSize;
@property (nonatomic) NSUInteger         containerSpace;
@property (nonatomic) NSUInteger         containerSeparatorSpace;
@property (nonatomic) NSDictionary *context;
@property (nonatomic) NSDictionary *controlContext;
@property (nonatomic,strong) NGGuideRender *guideRender;
@property (nonatomic) BOOL           containsItems;
@property (nonatomic, copy) NSString *navigationStyle;
@property (nonatomic) BOOL isReloadingRichWidget;
- (void)reset;
- (NSString *)getQuestion;

@end
