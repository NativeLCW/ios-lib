//
//  NGGuidePage.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NGGuideInfoData.h"
#import "NGGuideNavProperties.h"

@interface NGGuidePage : UIViewController

- (id)initWithGuideInfo:(NGGuideInfoData *)guideInfo style:(NSString *)styleJson;
- (void)setProperties:(NGGuideNavProperties *)properties;

@end
