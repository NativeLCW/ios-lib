//
//  NGGuideView.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NGUtil.h"
#import "NGGuideInfoData.h"
#import "NGNodeView.h"
#import "NGHandlerProtocol.h"

@interface NGGuideView : UIView <NGTransitionProtocol,NGTransitionErrorProtocol>
//UI
@property (nonatomic, strong) UIScrollView          *scrollView;
@property (nonatomic, strong) UIStackView           *containerView;

@property (nonatomic, strong) NGNodeView            *curNodeView;
//Data
@property (nonatomic, strong) NGGuideInfoData       *guideInfoData;
@property (nonatomic) NSInteger *row;
- (id)initWithGuideInfoData:(NGGuideInfoData *)guideInfoData/* styleJson:(NSString*)styleJson*/;
- (id)initWithRichInfoData:(NGGuideInfoData *)guideInfoData styleJson:(NSString *)styleJson reload:(BOOL)reload shouldDisplay:(BOOL)shouldDisplay isRestore:(BOOL)restore isasync:(BOOL)isAsync isLastMsg:(BOOL)isLast;
- (void)showNodeView:(NSString *)nodeName;
-(UIView*) getWidgeView;
-(NGWidgetType) getWidgeType;
-(void)setStyle:(NSString*) styleJson;
-(void) setWidgetViewBackGround:(UIColor*)color;
-(void) setExternalWidth:(int)width;
-(void)setRichMediaWidgetRow:(NSString*)row;
+(void)removeAllCache;
+ (void)setAlertTimeInSeconds:(int)newtime;
-(void)forceDisable;
@end

