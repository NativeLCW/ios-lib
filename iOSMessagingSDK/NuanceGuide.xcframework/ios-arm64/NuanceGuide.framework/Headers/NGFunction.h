//
//  Function.h
//  Javaluator
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NGFunction : NSObject
{
    NSString        *_name;
    NSInteger       _minArgumentCount;
    NSInteger       _maxArgumentCount;
}
/** Constructor.
 * <br>This constructor builds a function with a fixed arguments count.
 * @param name The function's name
 * @param argumentCount The function's argument count.
 */
- (id)initWithName:(NSString *)name argumentCount:(NSInteger)argumentCount;
/** Constructor.
 * <br>This constructor builds a function with a variable arguments count.
 * <br>For instance, a minimum function may have at least one argument.
 * @param name The function's name
 * @param minArgumentCount The function's minimum argument count.
 * @param maxArgumentCount The function's maximum argument count (Integer.MAX_VALUE to specify no upper limit).
 */
- (id)initWithName:(NSString *)name minArgumentCount:(NSInteger)minArgumentCount maxArgumentCount:(NSInteger )maxArgumentCount;
/** Gets the function's name.
 * @return the name of the function
 */
- (NSString *)getName ;

/** Gets the function's minimum argument count.
 * @return an integer
 */
- (NSInteger)getMinimumArgumentCount;

/** Gets the function's maximum argument count.
 * @return an integer
 */
- (NSInteger)getMaximumArgumentCount;
@end
