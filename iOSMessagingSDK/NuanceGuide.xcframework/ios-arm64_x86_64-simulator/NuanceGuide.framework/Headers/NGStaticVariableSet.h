//
//  StaticVariableSet.h
//  Javaluator
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NGAbstractVariableSet.h"

@interface NGStaticVariableSet : NSObject<NGAbstractVariableSet>
{
    NSMapTable                      *_varToValue;
}
/** Sets a variable value.
 * @param variableName The variable name
 * @param value The variable value (null to remove a variable from the set).
 */
- (void)set:(NSString *)variableName value:(id)value;
@end
