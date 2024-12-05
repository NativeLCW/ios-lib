//
//  NGGuideEventService.h
//  NuanceMessagingCore
//
//  Copyright © 2018 nuance. All rights reserved.
//

#import <NuanceMessagingCore/PostRequest.h>

@class NGGuideInfoData;
@interface NGGuideEventService : PostRequest

//+ (NGGuideEventService *)sharedInstance;
- (id)initWithEngagParams:(NSDictionary*)engageParams;
- (void)automatonStartedEventByNodeName:(NSString *)nodeName questions:(NSString *)questions guideInfo:(NGGuideInfoData*) guideInfo;
- (void)customerResponded:(NSString *)cQues nQues:(NSString *)nQues ans:(NSString *)ans nNode:(NSString *)nNode cNode:(NSString *)cNode guideInfo:(NGGuideInfoData*) guideInfo;
- (void)automatonEnded:(NSString *)node ques:(NSString *)ques ans:(NSString *)ans outcome:(BOOL)outcome completed:(BOOL)completed guideInfo:(NGGuideInfoData*) guideInfo;

@end
