//
//  NGWidgetView.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NGWidgetBaseData.h"

@protocol NGWidgetView <NSObject>
@property (nonatomic, strong) NGWidgetBaseData        *widgetData;
- (id)initWithWidgetData:(NGWidgetBaseData *)widgetData;
- (void)setupWithWidgetData:(NGWidgetBaseData *)widgetData;
- (void)reset;
- (void)setEnable:(BOOL)enable;
- (void)forceDisable;
@end
