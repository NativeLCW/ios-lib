//
//  CustomerHiddenMessageHandler.h
//  NuanceMessagingCore
//
//  Created by Mugdha Mundhe on 09/12/22.
//  Copyright © 2022 nuance. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CustomerHiddenMessageHandler : NSObject {
    NSMutableSet *customerExcludedMessageList;
}
-(void) addHiddenMessage:(NSString *)strObject;
-(void) clearHiddenMessages;
-(void) removeHiddenMessage:(NSString *)strObject;
- (NSMutableArray *)getMessages ;
-(void) setHiddenMessages:(NSMutableSet *)array;
+ (instancetype)sharedObject;
@end
