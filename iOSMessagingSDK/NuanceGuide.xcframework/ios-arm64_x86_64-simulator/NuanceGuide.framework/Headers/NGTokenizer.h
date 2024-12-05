//
//  NGTokenizer.h
//  Javaluator
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NGTokenizer : NSObject
@property (nonatomic, strong) NSRegularExpression   *pattern;
@property (nonatomic, copy) NSString    *tokenDelimiters;
/** Tests whether this tokens trims the tokens returned by {@link #tokenize(String)} method.
 * @return true if tokens are trimmed.
 */
/** trimTokens attribute.
 * Set trimTokens true to have the tokens returned by {@link #tokenize(String)} method trimmed.
 * <br>Note that empty tokens are always omitted by this class.
 */
@property (nonatomic, assign, getter=isTrimTokens) BOOL  trimTokens;
/** Constructor.
 * <br>By default, this tokenizer trims all the tokens.
 * @param delimiters the delimiters of the tokenizer, usually, the operators symbols, the brackets and the function argument separator are used as delimiter in the string.
 */
- (id)initWithDelimiters:(NSMutableArray <NSString *> *)delimiters;
/** Converts a string into tokens.
 * <br>Example: The result for the expression "<i>-1+min(10,3)</i>" evaluated for a DoubleEvaluator is an iterator on "-", "1", "+", "min", "(", "10", ",", "3", ")".
 * @param string The string to be split into tokens
 * @return The tokens
 */
- (NSMutableArray <NSString *> *)tokenize:(NSString *)string;
@end
