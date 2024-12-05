//
//  AgentHiddenMessageHandler.h
//  NuanceMessagingCore
//
//  Created by Mugdha Mundhe on 08/12/22.
//  Copyright © 2022 nuance. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AgentHiddenMessageHandler : NSObject {
    NSMutableSet *agentExcludedMessageList;
}

-(void) addHiddenMessage:(NSString *)strObject;
-(void) clearHiddenMessages;
-(void) removeHiddenMessage:(NSString *)strObject;
- (NSMutableArray *)getMessages ;
-(void) setHiddenMessages:(NSMutableSet *)array;
+ (instancetype)sharedObject;
@end
