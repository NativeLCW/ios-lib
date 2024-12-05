//
//  NGValueMapper.h
//  Javaluator
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NGGuideRender.h"

@interface NGValueMapper : NSObject

+ (NSString *)getValue:(NSString *)parameterName renderObject:(NGGuideRender*) render;
+ (NSString *)getControlVal:(NSString *)token widgetData:(id)widgetData element:(NSString *)element tokenizer:(id)tokenizer;
+(NSString*) getConstantsValue:(NSString*)text renderObject:(NGGuideRender*) render;
@end
