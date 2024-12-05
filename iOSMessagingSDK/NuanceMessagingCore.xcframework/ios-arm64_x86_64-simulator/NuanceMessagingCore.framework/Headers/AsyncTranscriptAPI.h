//
//  AsyncTranscriptAPI.h
//  NuanceMessagingCore
//
//  Created by mithun on 11/30/17.
//  Copyright © 2017 nuance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GetRequest.h"
#import "GetMessageResponse.h"

@interface AsyncTranscriptAPI : GetRequest {
    NSString *amode;
    NSString *days;
}

@property(nonatomic, copy) void (^completionhandler)(NSMutableArray* messages, Response *error);
- (void) getAsyncMessages:(void (^)(NSMutableArray* messages, Response *error))completionBlock andMode:(NSString*) mode andDays:(NSString*) days;

- (void) getAsyncMessages:(void (^)(NSMutableArray* messages, Response *error))completionBlock andMode:(NSString*) mode andDays:(NSString*) days andBUID:(NSString*)buID;

+ (void)shouldStubRM:(BOOL)shouldStub;
+ (void)setStubRichMessage:(NSDictionary *)stubData;
+ (BOOL)getShouldStubRM;
@end
