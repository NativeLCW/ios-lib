//
//  NGGuideRender.h
//  NuanceMessagingCore
//
//  Copyright © 2018 nuance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NGGuideInfoData.h"
#import "NGGuideEventService.h"
#import "NGGuideRestService.h"

@class NGTransitionHandler;
@class NGEnableStateHandler;
@class NGVisiblityHandler;
@class NGNodeData;

typedef NS_ENUM(NSUInteger, NGGuideState) {
    NGGuideState_Starting,
    NGGuideState_Started,
    NGGuideState_Ended,
};

@interface NGGuideRender : NSObject

@property (nonatomic, assign) NGGuideState state;
@property (nonatomic, copy) NSString *currentVisbleViewName;
@property (nonatomic, strong) NGTransitionHandler *transitionHandler;
@property (nonatomic, strong) NGEnableStateHandler *enableStateHandler;
@property (nonatomic, strong) NGVisiblityHandler *visiblityHandler;
@property (nonatomic, strong) NGGuideInfoData *guideInfo;
@property (nonatomic, weak) NGNodeData *currentVisibleNode;
@property (nonatomic, strong) NSMutableDictionary *dynamicVariableDic;
@property (nonatomic, strong) NGGuideRestService *guideRestService;
@property (nonatomic, strong) NGGuideEventService *guideEventService;
@property (nonatomic, strong) NSDictionary *engageParams;
@property (nonatomic) NSNumber *timeStamp;


- (BOOL)checkCondition:(NSString *)condition;
- (NGNodeData *)getNodeByID:(NSString *)nodeId;
- (NSString *)previousNodeName;
- (void)initRenderByCurrentNodeName:(NSString *)nodeName;
- (NSString *)getPresentedQuestion;
- (BOOL)isGuideEnded;
- (void)renderViewByName:(NSString *)name ans:(NSString *)ans;
- (void)clear;
- (id)getDynamicVariable:(NSString *)key;
- (void)getGuideConfigs:(NSString *)configID completeBlock:(NGGuideServiceCompleteBlock)completeBlock;
@end
