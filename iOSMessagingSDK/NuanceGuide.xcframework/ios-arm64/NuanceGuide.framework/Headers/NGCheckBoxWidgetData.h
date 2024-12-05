//
//  NGCheckboxWidgetData.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGWidgetBaseData.h"
#import "NGItem.h"

@interface NGCheckBoxWidgetData : NGWidgetBaseData

@property (nonatomic, copy) NSString *type;
@property (nonatomic, strong) NSArray *items;
@property (nonatomic, strong) NSArray *values;
@property (nonatomic,copy) NSDictionary *context;
@property (nonatomic,copy) NSDictionary *controlContext;
@property (nonatomic,copy) NSString *style;
@property (nonatomic,copy) NSString *helpText;

- (void)reset;
- (NSString *)getCheckedItemText;

@end
