//
//  NGGuideValueMapper.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <Foundation/Foundation.h>

@class NGTransitionData;
@class NGNodeData;
@class NGGuideRender;
@interface NGGuideValueMapper : NSObject

@property (nonatomic, strong) NGGuideRender *render;
//+ (NGGuideValueMapper *)sharedInstance;

- (NSString *)getValueForParameter:(NSString *)parameter;
- (NGTransitionData *)getTransitionData:(NSString *)trigger;

@end
