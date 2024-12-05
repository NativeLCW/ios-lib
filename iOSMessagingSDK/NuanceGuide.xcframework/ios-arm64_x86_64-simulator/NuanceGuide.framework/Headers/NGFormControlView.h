//
//  NGFormControlView.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NGUtil.h"
#import "NGFormControlData.h"
#import "NGHandlerProtocol.h"
#import "NGLabel.h"

@interface NGFormControlView : UIView <NGVisiblityProtocol>
//UI
@property (nonatomic, strong) NGLabel               *titleLab;
@property (nonatomic, strong) NSMutableArray        *widgetViews;
//Data
@property (nonatomic, strong) NGFormControlData     *formControlData;

- (id)initWithFormControlData:(NGFormControlData *)formConrolData;
- (void)reset;
- (void)createWidgetViewsWichFormControlData:(NGFormControlData *)formControlData;
- (void)setWidgetViews:(NSMutableArray *)widgetViews;
- (void)forceDisable;

@end
