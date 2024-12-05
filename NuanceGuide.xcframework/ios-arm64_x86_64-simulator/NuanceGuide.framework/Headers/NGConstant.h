//
//  Constant.h
//  Javaluator
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NGConstant : NSObject
{
    NSString    *_name;
}
/** Constructor
 * @param name The mnemonic of the constant.
 * <br>The name is used in expressions to identified the constants.
 */
- (id)initWithName:(NSString *)name;
/** Gets the mnemonic of the constant.
 * @return the id
 */
- (NSString *)getName;
@end
