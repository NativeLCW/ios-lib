//
//  NGBracketPair.h
//  Javaluator
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NGBracketPair : NSObject
{
    NSString        *_open;
    NSString        *_close;
}
/** The parentheses pair: ().*/
+ (NGBracketPair *)PARENTHESES;
/** The square brackets pair: [].*/
+ (NGBracketPair *)BRACKETS;
/** The braces pair: {}.*/
+ (NGBracketPair *)BRACES;
/** The angle brackets pair: <>.*/
+ (NGBracketPair *)ANGLES;

-(id)initWithOpen:(NSString *)open close:(NSString *)close;
/** Gets the open bracket character.
 * @return a char
 */
- (NSString *)getOpen;
/** Gets the close bracket character.
 * @return a char
 */
- (NSString *)getClose;

- (NSString *)toString;
@end
