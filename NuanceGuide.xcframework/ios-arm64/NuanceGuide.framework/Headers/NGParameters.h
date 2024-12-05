//
//  NGParameters.h
//  Javaluator
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NGFunction.h"
#import "NGConstant.h"
#import "NGOperator.h"
#import "NGBracketPair.h"

@interface NGParameters : NSObject {
    NSString                            *_functionSeparator;
    NSMutableArray <NGOperator *>         *_operators;
    NSMutableArray <NGFunction *>         *_functions;
    NSMutableArray <NGConstant *>         *_constants;
    NSMutableArray <NGBracketPair *>      *_expressionBrackets;
    NSMutableArray <NGBracketPair *>      *_functionBrackets;
    NSMapTable <NSString *,NSString *>  *_translations;
}
/** Gets the supported operators.
 * @return a Collection of operators.
 */
- (NSMutableArray *)getOperators;
/** Gets the supported functions.
 * @return a Collection of functions.
 */
- (NSMutableArray *)getFunctions;
/** Gets the supported constants.
 * @return a Collection of constants.
 */
- (NSMutableArray *)getConstants;

/** Gets the supported bracket pairs for expressions.
 * @return a Collection of bracket pairs.
 */
- (NSMutableArray *)getExpressionBrackets;

/** Gets the supported bracket pairs for functions.
 * @return a Collection of bracket pairs.
 */
- (NSMutableArray *)getFunctionBrackets;
/** Adds operators to the supported ones.
 * @param operators The operators to be added.
 */
- (void)addOperators:(NSMutableArray *)operators;
/** Adds an operator to the supported ones.
 * @param oper The added operator
 */
- (void)addOperator:(NGOperator *)oper;

/** Adds functions to the supported ones.
 * @param functions The functions to be added.
 */
- (void)addFunctions:(NSMutableArray *)functions;

/** Adds a function to the supported ones.
 * @param function The added function
 */
- (void)addFunction:(NGFunction *)function;

/** Adds constants to the supported ones.
 * @param constants The constants to be added.
 */
- (void)addConstants:(NSMutableArray *)constants;

/** Adds a constant to the supported ones.
 * @param constant The added constant
 */
- (void)addConstant:(NGConstant *)constant;

/** Adds a new bracket pair to the expression bracket list.
 * @param pair A bracket pair
 */
- (void)addExpressionBracket:(NGBracketPair *)pair;

/** Adds bracket pairs to the expression bracket list.
 * @param brackets The brackets to be added.
 */
- (void)addExpressionBrackets:(NSMutableArray *)brackets;

/** Adds a new bracket pair to the function bracket list.
 * @param pair A bracket pair
 */
- (void)addFunctionBracket:(NGBracketPair *)pair;

/** Adds bracket pairs to the function bracket list.
 * @param brackets The brackets to be added.
 */
- (void)addFunctionBrackets:(NSMutableArray * )brackets;

/** Sets the translated term for a function.
 * <br>Using this method, you can localize the names of some built-in functions. For instance,
 * for french people,you can use this method to use "somme" instead of "sum" with the SUM built-in
 * function of DoubleEvaluator.
 * @param function The function you want to translate the name
 * @param translatedName The translated name
 * @see DoubleEvaluator#SUM
 */
- (void)setTranslationFunction:(NGFunction *)function translatedName:(NSString *)translatedName ;

/** Sets the translated term for a constant.
 * @param constant The constant you want to translate the name
 * @param translatedName The translated name
 * @see #setTranslation(Function, String)
 */
- (void)setTranslationConstant:(NGConstant *)constant translatedName:(NSString *)translatedName;

- (NSString *)getTranslation:(NSString *)originalName;
/** Sets the function argument separator.
 * <br>Its default value is ','.
 * @param separator The new separator
 */
- (void)setFunctionArgumentSeparator:(NSString * )separator;

/** Gets the function argument separator.
 * @return a string
 */
- (NSString *)getFunctionArgumentSeparator;
@end
