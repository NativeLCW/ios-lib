//
//  EngageCall.h
//  IOS MVP
//
//  Created by mithun on 9/26/17.
//  Copyright © 2017 nuance. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "Engage.h"
#import "EngageBuilder.h"

@interface EngageCall : Engage {
    
}


- (instancetype)initWithBlock:(EngageBuilderBlock)block ;
- (instancetype)initWithBuilder:(EngageBuilder*) builder;
@end
