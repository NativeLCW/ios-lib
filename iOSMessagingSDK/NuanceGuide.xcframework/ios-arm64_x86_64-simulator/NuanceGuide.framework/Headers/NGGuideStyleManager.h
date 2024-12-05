//
//  NGGuideStyleManager.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NGGuideStyleInfo.h"

static NSString * const kDefaultFontName = @"Helvetica";
static NSString * const kDefaultBoldFontName = @"HelveticaNeue-Bold";

@interface NGGuideStyleManager : NSObject

@property (nonatomic, strong) NGGuideStyleInfo *guideStyles;

+ (NGGuideStyleManager *)sharedInstance;

@end
