//
//  NGUtil.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define RGB(r, g, b, opacity) [UIColor colorWithRed: (r / 255.0) green: (g / 255.0) blue: (b / 255.0) alpha: opacity]

@interface NGUtil : NSObject
+ (UIColor *)getColorWithHexString:(NSString *)hexColor;
+(UIColor*)getColorFromRgb:(CGFloat)r green:(CGFloat)g blue:(CGFloat)b;
+ (void)addView:(UIView *)subView  margin:(UIEdgeInsets)margin toView:(UIView *)toView;
+ (void)addViewHeightConstraint:(UIView *)view  height:(CGFloat)height priority:(CGFloat)priority;
+ (void)stackViewRemoveViews:(UIStackView *)stackView;
+ (void)stackViewRemoveView:(UIView *)subView fromStackView:(UIStackView *)stackView;
+ (void)stackView:(UIStackView *)stackView addSubview:(UIView *)addView;
+ (void)stackView:(UIStackView *)stackView addSubview:(UIView *)addView aboveView:(UIView *)aboveView;
+ (void)stackView:(UIStackView *)stackView addSubview:(UIView *)addView belowView:(UIView *)belowView;
+ (NSBundle *)bundle;
+ (UIImage *)imageName:(NSString *)imageName;
+ (void)removeAllSubView:(Class)subViewClass inView:(UIView *)parentView;
+ (UIViewController *)topViewController;
+ (NSString *)getObjectStringValue:(id)object;
//+ (void)showToastMessage:(NSString *)message inView:(UIView *)inView;
+(NSString*) getErrorMessageFromNotification:(NSNotification *) notification;
+(NSString*) getWidgetIdFromNotification:(NSNotification *) notification;
+(BOOL) isTimeStampSame:(NSNumber*) actualTimeStamp receivedTimeStamp:(NSNumber*) receivedTimeStamp;
+(NSNumber*) getTimeStmapFromNotification:(NSNotification *) notification;
@end
