//
//  DCCustomVariable.h
//  NuanceMessagingCore
//
//  Created by mithun on 1/18/18.
//  Copyright © 2018 nuance. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CustomVariableBuilder.h"


@interface DCCustomVariable: NSObject

    - (instancetype)initWithBlock:(CustomVariableBuilderBlock)block;
    - (instancetype)initWithBuilder:(CustomVariableBuilder*) builder;
    - (NSMutableArray*)getCustomVars;
@end
