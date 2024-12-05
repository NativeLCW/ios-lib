//
//  CustomVariableBuilder.h
//  NuanceMessagingCore
//
//  Created by mithun on 1/18/18.
//  Copyright © 2018 nuance. All rights reserved.
//

#import <UIKit/UIKit.h>
@class CustomVariableBuilder;
typedef void(^CustomVariableBuilderBlock)(CustomVariableBuilder *builder);

@class DCCustomVariable;

enum DCCustomVariableAction{
    CustomVariableAction_APPEND,
    CustomVariableAction_SET,
    CustomVariableAction_REMOVE
};
enum DCCustomVariablePersistence{
    CustomVariablePersistence_VOLATILE,
    CustomVariablePersistence_PERSISTENT
};

@interface CustomVariableBuilder: NSObject {
    
}

   
    - (void) addCustomVariable:(NSString*)name andValue:(NSString*)value andAction:(enum DCCustomVariableAction)action andPersistenceState:(enum DCCustomVariablePersistence)persistence;
    - (DCCustomVariable*) build;
    - (NSMutableArray*)getCustomVars;
@end
