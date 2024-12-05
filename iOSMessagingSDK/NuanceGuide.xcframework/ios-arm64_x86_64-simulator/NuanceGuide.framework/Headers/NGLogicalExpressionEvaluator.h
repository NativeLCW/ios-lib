//
//  NGLogicalExpressionEvaluator.h
//  Javaluator
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGAbstractEvaluator.h"
#import "NGBracketPair.h"
#import "NGFunction.h"
#import "NGOperator.h"
#import "NGParameters.h"
#import "NGValueComparator.h"

@class NGGuideRender;

@interface NGLogicalExpressionEvaluator : NGAbstractEvaluator
@property (nonatomic) NGGuideRender *guideRender;

+ (NGOperator *)AND;
+ (NGOperator *)OR;
+ (NGOperator *)AND_SIGN;
+ (NGOperator *)OR_SIGN;

+ (NGOperator *)NOT;

+ (NGOperator *)EQUAL;
+ (NGOperator *)NEQUAL;

+ (NGOperator *)GT;
+ (NGOperator *)GTE;
+ (NGOperator *)LT;
+ (NGOperator *)LTE;

+ (NGFunction *)IS_EMPTY;
+ (NGFunction *)REGEX_MATCH;
+ (NGFunction *)BOOLEAN;
@end
