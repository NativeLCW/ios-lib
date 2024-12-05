//
//  EngageMessaging.h
//  IOS MVP
//
//  Created by mithun on 9/25/17.
//  Copyright © 2017 nuance. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "Engage.h"
#import "EngageBuilder.h"


@interface MessagingAPI : Engage {
    
}

- (instancetype)initWithoutBlock;
- (instancetype)initWithBlock:(EngageBuilderBlock)block;
- (instancetype)initWithBuilder:(EngageBuilder*) builder;
- (void)setEngageBuilderValues:(EngageBuilderBlock)block;

@end
