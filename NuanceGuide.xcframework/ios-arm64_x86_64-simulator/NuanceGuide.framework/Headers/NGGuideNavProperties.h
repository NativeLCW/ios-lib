//
//  NGGuideNavProperties.h
//  NuanceGuide
//
//  Copyright © 2018. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NGGuideNavProperties : NSObject

// app icon
@property (nonatomic, strong) UIImage *iconImage;

// navigation bar title
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) UIColor *titleColor;

//navigation bar right btn
@property (nonatomic, strong) UIImage *closeImage;

// guide ui style
@property (nonatomic, copy) NSString *styleJson;

@end
