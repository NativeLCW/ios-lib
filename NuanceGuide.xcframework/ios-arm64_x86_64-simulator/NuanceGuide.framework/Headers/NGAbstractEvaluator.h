//
//  AbstractEvaluator.h
//  Javaluator
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "NGTokenizer.h"
#import "NGBracketPair.h"
#import "NGParameters.h"
#import "NGToken.h"
#import "NGOperator.h"
#import "NSMutableArray+Deque.h"

@interface NGAbstractEvaluator : NSObject
{
    NGTokenizer                                               *_tokenizer;
    NSMapTable<NSString *,NGFunction*>                        *_functions;
    NSMapTable<NSString *,NSMutableArray<NGOperator *> *>     *_operators;
    NSMapTable<NSString *,NGConstant*>                        *_constants;
    NSMapTable<NSString *,NGBracketPair *>                    *_functionBrackets;
    NSMapTable<NSString *,NGBracketPair *>                    *_expressionBrackets;
    NSString                                                *_functionArgumentSeparator;
}
/** Constructor.
 * @param parameters The evaluator parameters.
 * <br>Please note that there's no side effect between the evaluator and the parameters.
 * So, changes made to the parameters after the call to this constructor are ignored by the instance.
 */
- (id)initWithParameters:(NGParameters *)parameters;

/** Validates that homonym operators are valid.
 * <br>Homonym operators are operators with the same name (like the unary - and the binary - operators)
 * <br>This method is called when homonyms are passed to the constructor.
 * <br>This default implementation only allows the case where there's two operators, one binary and one unary.
 * Subclasses can override this method in order to accept others configurations.
 * @param operators The operators to validate.
 * @throws IllegalArgumentException if the homonyms are not compatibles.
 * @see #guessOperator(NGToken, List)
 */
- (BOOL)validateHomonyms:(NSMutableArray *)operators;

/** When a token can be more than one operator (homonym operators), this method guesses the right operator.
 * <br>A very common case is the - sign in arithmetic computation which can be an unary or a binary operator, depending
 * on what was the previous token.
 * <br><b>Warning:</b> maybe the arguments of this function are not enough to deal with all the cases.
 * So, this part of the evaluation is in alpha state (method may change in the future).
 * @param previous The last parsed tokens (the previous token in the infix expression we are evaluating).
 * @param candidates The candidate tokens.
 * @return A token
 * @see #validateHomonyms(List)
 */
- (NGOperator *)guessOperator:(NGToken *)previous candidates:(NSMutableArray <NGOperator *> * )candidates;

/** Evaluates a constant.
 * <br>Subclasses that support constants must override this method.
 * The default implementation throws a RuntimeException meaning that implementor forget to implement this method
 * while creating a subclass that accepts constants.
 * @param constant The constant
 * @param evaluationContext The context of the evaluation
 * @return The constant's value
 */
- (id)evaluateConstant:(NGConstant *)constant evaluationContext:(id)evaluationContext;

/** Evaluates an operation.
 * <br>Subclasses that support operators must override this method.
 * The default implementation throws a RuntimeException meaning that implementor forget to implement this method
 * while creating a subclass that accepts operators.
 * @param oper The oper
 * @param operands The operands
 * @param evaluationContext The context of the evaluation
 * @return The result of the operation
 */
- (id)evaluateOperator:(NGOperator *)oper  operands:(NSMutableArray *)operands evaluationContext:(id)evaluationContext;

/** Evaluates a function.
 * <br>Subclasses that support functions must override this method.
 * The default implementation throws a RuntimeException meaning that implementor forget to implement this method
 * while creating a subclass that accepts functions.
 * @param function The function
 * @param arguments The function's arguments
 * @param evaluationContext The context of the evaluation
 * @return The result of the function
 */
- (id)evaluateFunction:(NGFunction *)function arguments:(NSMutableArray *)arguments evaluationContext:(id)evaluationContext;

/** Evaluates a literal (Converts it to a value).
 * @param literal The literal to evaluate.
 * @return an instance of T.
 * @param evaluationContext The context of the evaluation
 * @throws IllegalArgumentException if the literal can't be converted to a value.
 */
- (id)toValue:(NSString *)literal evaluationContext:(id)evaluationContext;

/** Evaluates an expression.
 * @param expression The expression to evaluate.
 * @return the result of the evaluation.
 * @throws IllegalArgumentException if the expression is not correct.
 */
- (id)evaluate:(NSString *)expression;

/** Evaluates an expression that contains variables.
 * @param expression The expression to evaluate.
 * @param evaluationContext The context of the evaluation.
 * <br>This context is an object that can contain useful dynamic data, for example the values of the variables
 * used in the expression (Use an NGAbstractVariableSet to do that).<br>The context is not limited to variable values but
 * can be used for any dynamic information. A good example is the <a href="http://javaluator.sourceforge.net/en/doc/tutorial.php?chapter=creatingComplex">BooleanSetEvaluator</a> one.
 * @return the result of the evaluation.
 * @throws IllegalArgumentException if the expression is not correct.
 * @see NGAbstractVariableSet
 */
- (id)evaluate:(NSString *)expression evaluationContext:(NSObject *)evaluationContext;

/** Gets the operators supported by this evaluator.
 * @return a collection of operators.
 */
- (NSMutableArray <NGOperator *>*)getOperators;

/** Gets the functions supported by this evaluator.
 * @return a collection of functions.
 */
- (NSMutableArray <NGFunction *>*)getFunctions;

/** Gets the constants supported by this evaluator.
 * @return a collection of constants.
 */
- (NSMutableArray <NGConstant *>*)getConstants;

/** Converts the evaluated expression into tokens.
 * <br>Example: The result for the expression "<i>-1+min(10,3)</i>" is an iterator on "-", "1", "+", "min", "(", "10", ",", "3", ")".
 * <br>By default, the operators symbols, the brackets and the function argument separator are used as delimiter in the string.
 * @param expression The expression that is evaluated
 * @return A string iterator.
 */
- (NSMutableArray <NSString *> *)tokenize:(NSString* )expression;
@end
