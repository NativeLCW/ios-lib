//
//  NGAbstractVariableSet.h
//  Javaluator
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol NGAbstractVariableSet <NSObject>
- (id)get:(NSString *)variableName;
@end
