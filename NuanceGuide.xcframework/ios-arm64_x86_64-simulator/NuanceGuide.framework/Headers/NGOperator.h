//
//  NGOperator.h
//  Javaluator
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <Foundation/Foundation.h>
/** An Operator's <a href="http://en.wikipedia.org/wiki/Operator_associativity">associativity</a>.
 */
typedef NS_ENUM(NSInteger, Operator_Associativity) {
    /** Left associativity.*/
    Operator_Associativity_LEFT,
    /** Right associativity. */
    Operator_Associativity_RIGHT,
    /** No associativity.*/
    Operator_Associativity_NONE
};

@interface NGOperator : NSObject
{
    NSString        *_symbol;
    NSInteger       _precedence;
    NSInteger       _operandCount;
    Operator_Associativity   _associativity;
}
/** Constructor.
 * @param symbol The operator name (Currently, the name's length must be one character).
 * @param operandCount The number of operands of the operator (must be 1 or 2).
 * @param associativity true if operator is left associative
 * @param precedence The <a href="http://en.wikipedia.org/wiki/Order_of_operations">precedence</a> of the operator.
 * <br>The precedence is the priority of the operator. An operator with an higher precedence will be executed before an operator with a lower precedence.
 * Example : In "<i>1+3*4</i>" * has a higher precedence than +, so the expression is interpreted as 1+(3*4).
 */
- (id)initWithSymbol:(NSString *)symbol operandCount:(NSInteger)operandCount  associativity:(Operator_Associativity)associativity precedence:(NSInteger)precedence;
/** Gets the operator's symbol.
 * @return a String
 */
- (NSString *)getSymbol;

/** Gets the operator's operand count.
 * @return an integer
 */
- (NSInteger)getOperandCount;

/** Gets this operator's associativity.
 * @return true if the operator is left associative.
 * @see <a href="http://en.wikipedia.org/wiki/Operator_associativity">Operator's associativity in Wikipedia</a>
 */
- (Operator_Associativity)getAssociativity;

/** Gets the operator's precedence.
 * @return an integer
 * @see <a href="http://en.wikipedia.org/wiki/Order_of_operations">Operator's associativity in Wikipedia</a>
 */
- (NSInteger)getPrecedence;


- (NSInteger) hashCode;
- (BOOL)isEqual:(id)obj;
@end
