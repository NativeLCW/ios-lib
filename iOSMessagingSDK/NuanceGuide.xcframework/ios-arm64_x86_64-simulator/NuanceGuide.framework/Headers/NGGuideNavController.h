//
//  NGGuideNavController.h
//  NuanceGuide
//
//  Copyright © 2018. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NGGuidePage.h"

@interface NGGuideNavController : UINavigationController

- (id)initWithProperties:(NGGuideNavProperties *)properties guideInfo:(NGGuideInfoData *)guideInfo;

- (void)setProperties:(NGGuideNavProperties *)properties;
@property (nonatomic) CGFloat frameHeight;

@end
