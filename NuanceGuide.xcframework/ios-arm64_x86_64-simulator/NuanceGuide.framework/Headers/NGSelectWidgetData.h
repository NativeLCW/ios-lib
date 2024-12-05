//
//  NGSelectWidgetData.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGWidgetBaseData.h"

@interface NGSelectWidgetData : NGWidgetBaseData

@property (nonatomic, strong) NSArray *items;
@property (nonatomic, strong) NSArray *values;
@property (nonatomic) NSUInteger defaultSelected;
@property (nonatomic) NSUInteger selectedIndex;
@property (nonatomic,copy) NSDictionary *context;
@property (nonatomic,copy) NSDictionary *controlContext;
@property (nonatomic,copy) NSString *style;
@property (nonatomic,copy) NSString *header;
@property (nonatomic,copy) NSString *helpText;

- (NSString *)getSelectedText;

- (int)getSelectedIndex;
- (void) updateIndex:(NSUInteger)selectedIndex;
@end
