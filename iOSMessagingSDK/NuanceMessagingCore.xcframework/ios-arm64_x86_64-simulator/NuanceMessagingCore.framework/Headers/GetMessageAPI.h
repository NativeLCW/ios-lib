//
//  GetMessageAPI.h
//  IOS MVP
//
//  Created by mithun on 9/27/17.
//  Copyright © 2017 nuance. All rights reserved.
//

#import "GetRequest.h"
#import "GetMessageResponse.h"

@class DataPassAPI;

@interface GetMessageAPI : GetRequest {
    BOOL requestFullTranscript;
    NSTimer *timer;
    BOOL pause;
    int unread;
    BOOL background;
    DataPassAPI *dpInstance;
}
@property (nonatomic, assign) BOOL shouldSendNextData;
-(void)setSendNextDataValue:(BOOL)shouldSend;
@property(nonatomic, copy) void (^completionhandler)(GetMessageResponse* success, Response *error);
- (void) startPooling;
- (void) getMessages:(void (^)(GetMessageResponse* success, Response *error))completionBlock;
- (void) restartGetMessages;
- (void) restartGetMessages:(BOOL) needPreviousTranscript andCompletionBlock:(void (^)(GetMessageResponse* success, Response *error))completionBlock andCompletedReloadingBlock:(void (^)(void))reloadBlock;
- (BOOL) isRequestFullTranscript;
- (BOOL) isPooling;

- (void) cancelGetMessages;
- (void) abortGetRequest;
- (int) getUnReadMsgs:(void (^)(GetMessageResponse* success, Response *error))completionBlock;
- (void) setDataPassInstance:(DataPassAPI*)instance;

+ (GetMessageAPI *) getInstance;
+ (void)setStubRichMessage:(NSDictionary *)stubData;
@end
