//
//  NuanceActivityIndicator.h
//  NuanceGuide
//
//  Created by isha.ramdasi on 30/11/22.
//  Copyright © 2022 Zhou, Zhi Ming(Zhiming). All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface NGActivityIndicator : UIView

@property (nonatomic, strong) UIColor *indicatorColor;
@property (nonatomic, strong) UIColor *loadingViewColor;
@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, strong) NSString * loadingMessage;
@property (nonatomic, strong) UIView * indicatorViewFrame;
@property (nonatomic, strong) UIActivityIndicatorView * activityIndicator;
@property (nonatomic, strong) UIView * parentView;

-(void)start;
-(void)stop;
-(UIView*)init :(UIView*)inview loadingViewColor:(UIColor*)loadingViewColor indicatorColor:(UIColor*)indicatorColor msg:(NSString*)msg txtColor:(UIColor*)txtColor;
@end


