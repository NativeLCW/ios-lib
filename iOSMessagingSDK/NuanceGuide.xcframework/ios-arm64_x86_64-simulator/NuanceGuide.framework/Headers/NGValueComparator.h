//
//  ValueComparator.h
//  Javaluator
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "NGOperator.h"
#import "NGGuideRender.h"

@interface NGValueComparator : NSObject
+ (BOOL)evaluateExpression:(NGOperator *)operator op1:(NSString *)op1 op2:(NSString *)op2 renderObject:(NGGuideRender*) guideRender;
+ (BOOL)compareStringNumbers:(NSString *)num1 num2:(NSString *)num2 op2:(NGOperator *)operator;
@end
