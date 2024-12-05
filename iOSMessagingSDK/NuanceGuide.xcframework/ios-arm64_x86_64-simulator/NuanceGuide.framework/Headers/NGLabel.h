//
//  NGLabel.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NGLabel : UILabel

@property (nonatomic, assign) UIEdgeInsets edgeInsets;
- (id)initWithFrame:(CGRect)frame withEdgeInsets:(UIEdgeInsets)edgeInsets;
@end
