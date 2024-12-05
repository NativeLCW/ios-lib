//
//  NGToken.h
//  Javaluator
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NGOperator.h"
#import "NGFunction.h"
#import "NGBracketPair.h"


typedef NS_ENUM(NSInteger, Token_Kind) {
    Token_Kind_OPEN_BRACKET,
    Token_Kind_CLOSE_BRACKET,
    Token_Kind_FUNCTION_SEPARATOR,
    Token_Kind_FUNCTION,
    Token_Kind_OPERATOR,
    Token_Kind_LITERAL
};

@interface NGToken : NSObject
{
    Token_Kind        _kind;
    NSObject        * _content;
}
+ (NGToken *)FUNCTION_ARG_SEPARATOR;
+ (NGToken *)buildLiteral:(NSString *)literal;
+ (NGToken *)buildOperator:(NGOperator *)ope;
+ (NGToken *)buildFunction:(NGFunction *)function;
+ (NGToken *)buildOpenToken:(NGBracketPair *)pair;
+ (NGToken *)buildCloseToken:(NGBracketPair *)pair;

- (id)initWithKind:(Token_Kind )kind content:(NSObject *)content;
- (NGBracketPair *)getBrackets;
- (NGOperator *)getOperator;
- (NGFunction *)getFunction;
- (Token_Kind)getKind;

/** Tests whether the token is an operator.
 * @return true if the token is an operator
 */
- (BOOL)isOperator;

/** Tests whether the token is a function.
 * @return true if the token is a function
 */
- (BOOL)isFunction;

/** Tests whether the token is an open bracket.
 * @return true if the token is an open bracket
 */
- (BOOL)isOpenBracket;

/** Tests whether the token is a close bracket.
 * @return true if the token is a close bracket
 */
- (BOOL)isCloseBracket;

/** Tests whether the token is a function argument separator.
 * @return true if the token is a function argument separator
 */
- (BOOL)isFunctionArgumentSeparator;

/** Tests whether the token is a literal or a constant or a variable name.
 * @return true if the token is a literal, a constant or a variable name
 */
- (BOOL)isLiteral;

- (Operator_Associativity)getAssociativity;

- (NSInteger)getPrecedence;

- (NSString *)getLiteral;
@end
