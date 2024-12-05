//
//  NGFunctionEvaluator.h
//  Javaluator
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NGFunction.h"
#import "NGGuideRender.h"


@interface NGFunctionEvaluator : NSObject
+ (NSString *)evaluateFunction:(NGFunction *)function arguments:(NSMutableArray <NSString *> *)arguments render:(NGGuideRender*) render;
@end
