//
//  NGHeadingWidgetData.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGWidgetBaseData.h"

@interface NGHeadingWidgetData : NGWidgetBaseData

@property (nonatomic, copy) NSString *text;
@property (nonatomic) NSInteger level;
@property (nonatomic,copy) NSDictionary *context;
@property (nonatomic,copy) NSString *style;
//@property (nonatomic) NSUInteger containerSpace;
@end

