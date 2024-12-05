//
//  NGNotificationCenter.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

static NSString * const kResetNotificationName = @"kResetNotification";
static NSString * const kCancelNotificationName = @"kCancelNotification";
static NSString * const kEndNotificationName = @"kEndNotification";
static NSString * const kStartChatNotificationName = @"kStartChatNotificationName";
static NSString * const kRichActionNotificationName = @"kRichActionNotificationName";
static NSString * const kHideKeyboardNotificationName = @"kHideKeyboardNotification";

@interface NGNotificationCenter : NSObject

+ (void)addEventObserver:(id)observer selector:(SEL)aSelector name:(nullable NSNotificationName)aName object:(nullable id)anObject;

+ (void)addDefaultEventObserver:(id)sender selector:(SEL)aSelector;

+ (void)postDefaultEventNotificationWithObejct:(nullable id)object;

+ (void)postEventName:(NSString *)name object:(nullable id)object;

+ (void)postEventName:(NSString *)name object:(nullable id)object userInfo:(nullable NSDictionary *)userInfo;

+ (void)postEventNameToMainThread:(NSString *)name object:(nullable id)object;

+ (void)postEventNameToMainThread:(NSString *)name object:(nullable id)object userInfo:(nullable NSDictionary *)userInfo;

+ (void)removeEventObserver:(id)observer;

+ (void)removeEventObserver:(id)observer eventName:(NSString *)name object:(nullable id)object;

@end

NS_ASSUME_NONNULL_END
