//
//  DoubleEvaluator.h
//  Javaluator
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGAbstractEvaluator.h"
#import "NGConstant.h"
#import "NGFunction.h"
#import "NGOperator.h"


typedef NS_ENUM(NSUInteger, DoubleEvaluator_Style) {
    /** The most commonly operator precedence, where the unary minus as a lower precedence than the exponentiation.
     * <br>With this style, used by Google, Wolfram alpha, and many others, -2^2=-4.
     */
    DoubleEvaluator_Style_STANDARD,
    /** The operator precedence used by Excel, or bash shell script language, where the unary minus as a higher precedence than the exponentiation.
     * <br>With this style, -2^2=4.
     */
    DoubleEvaluator_Style_EXCEL
};


@interface NGDoubleEvaluator : NGAbstractEvaluator
/** A constant that represents pi (3.14159...) */
+ (NGConstant *)PI;
/** A constant that represents e (2.718281...) */
+ (NGConstant *)E;

/** Returns the smallest integer >= argument */
+ (NGFunction *)CEIL;
/** Returns the largest integer <= argument */
+ (NGFunction *)FLOOR;
/** Returns the closest integer of a number */
+ (NGFunction *)ROUND;
/** Returns the absolute value of a number */
+ (NGFunction *)ABS;

/** Returns the trigonometric sine of an angle. The angle is expressed in radian.*/
+ (NGFunction *)SINE;
/** Returns the trigonometric cosine of an angle. The angle is expressed in radian.*/
+ (NGFunction *)COSINE;
/** Returns the trigonometric tangent of an angle. The angle is expressed in radian.*/
+ (NGFunction *)TANGENT;
/** Returns the trigonometric arc-cosine of an angle. The angle is expressed in radian.*/
+ (NGFunction *)ACOSINE;
/** Returns the trigonometric arc-sine of an angle. The angle is expressed in radian.*/
+ (NGFunction *)ASINE;
/** Returns the trigonometric arc-tangent of an angle. The angle is expressed in radian.*/
+ (NGFunction *)ATAN;

/** Returns the hyperbolic sine of a number.*/
+ (NGFunction *)SINEH;
/** Returns the hyperbolic cosine of a number.*/
+ (NGFunction *)COSINEH;
/** Returns the hyperbolic tangent of a number.*/
+ (NGFunction *)TANGENTH;

/** Returns the minimum of n numbers (n>=1) */
+ (NGFunction *)MIN;
/** Returns the maximum of n numbers (n>=1) */
+ (NGFunction *)MAX;
/** Returns the sum of n numbers (n>=1) */
+ (NGFunction *)SUM;
/** Returns the average of n numbers (n>=1) */
+ (NGFunction *)AVERAGE;

/** Returns the natural logarithm of a number */
+ (NGFunction *)LN;
/** Returns the decimal logarithm of a number */
+ (NGFunction *)LOG;

/** Returns a pseudo random number */
+ (NGFunction *)RANDOM;


/** The negate unary operator in the standard operator precedence.*/
+ (NGOperator *)NEGATE;
/** The negate unary operator in the Excel like operator precedence.*/
+ (NGOperator *)NEGATE_HIGH;
/** The substraction operator.*/
+ (NGOperator *)MINUS;
/** The addition operator.*/
+ (NGOperator *)PLUS;
/** The multiplication operator.*/
+ (NGOperator *)MULTIPLY;
/** The division operator.*/
+ (NGOperator *)DIVIDE;
/** The exponentiation operator.*/
+ (NGOperator *)EXPONENT;
/** The <a href="http://en.wikipedia.org/wiki/Modulo_operation">modulo operator</a>.*/
+ (NGOperator *)MODULO;

/** The standard whole set of predefined operators */
+ ( NSMutableArray<NGOperator *> *)OPERATORS;
/** The excel like whole set of predefined operators */
+ ( NSMutableArray<NGOperator *> *)OPERATORS_EXCEL;
/** The whole set of predefined functions */
+ ( NSMutableArray<NGFunction *> *)FUNCTIONS;
/** The whole set of predefined constants */
+ ( NSMutableArray<NGConstant *> *)CONSTANTS;

+ ( NSNumberFormatter *)FORMATTER;

+ (NGParameters *)getDefaultParameters;
+ (NGParameters *)getDefaultParameters:(DoubleEvaluator_Style)style;

@end
