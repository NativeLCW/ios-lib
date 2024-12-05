//
//  NGHeadingWidgetView.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGBaseWidgetView.h"

@interface NGHeadingWidgetView : NGBaseWidgetView

-(void) setHeadingProperties:(NGWidgetBaseData *)widgetData;

-(void) setLabelTextColor: (UIColor*) color;
-(void) setNoBorderToView;
-(void) setHeadingLabelAllignment:(NSTextAlignment) allignment;
-(void) setBottomLayerToView;
-(void) setRadiusToView:(CGFloat)radius;
@end

