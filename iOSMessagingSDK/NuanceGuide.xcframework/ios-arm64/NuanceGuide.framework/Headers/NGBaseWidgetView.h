//
//  NGBaseWidgetView.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NGWidgetBaseData.h"
#import "NGWidgetView.h"
#import "NGNotificationCenter.h"
#import "NGHandlerProtocol.h"
#import "NGGuideManager.h"
#import "NGUtil.h"
#import "NGLabel.h"

#define kInputElementId   @"kInputElementId"
#define kAlertElementId   @"kAlertElementId"
#define kRadioElementId   @"kRadioElementId"
#define kHeadingElementId   @"kHeadingElementId"
#define kSubtitleElementId   @"kSubtitleElementId"
#define kCheckboxElementId   @"kCheckboxElementId"
#define kButtonElementId   @"kButtonElementId"
#define kListElementId   @"kListElementItemId"
#define kSelectElementLabelId   @"kSelectElementLabelId"
#define kSelectElementButtonId   @"kSelectElementButtonId"

@interface NGBaseWidgetView : UIView <NGWidgetView, NGEnableProtocol, NGVisiblityProtocol>
@property NSDictionary *contextDict;
@property (nonatomic) NSDictionary *controlContext;
- (void)setupData;
- (void)setupUI;
-(NGLabel*) getTitleLabelForView;
-(UILabel*) getErrorLabelForView;
-(UILabel*) getHelpTextLabelForView;
-(void)setItemContainerContextForView:(NSDictionary*) dict;
-(NSMutableArray*)getPaddingArray:(NSDictionary*)context;
@property (nonatomic) NSUInteger containerSize;
@property (strong, nonatomic) NSString *containerAlignment;
@end
