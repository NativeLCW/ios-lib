//
//  NGGuideManager.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NGGuideInfoData.h"
#import "NGGuideRestService.h"
#import "NGGuideRender.h"
#import "NGNodeData.h"

@interface NGGuideManager : NSObject

+ (NGGuideManager *)sharedInstance;


//@property (nonatomic, strong) NGGuideRender *guideRender;
//@property (nonatomic, strong) NGGuideInfoData *guideInfo;
//@property (nonatomic, weak) NGNodeData *currentVisibleNode;
//@property (nonatomic, strong) NSMutableDictionary *dynamicVariableDic;

//- (NSString *)previousNodeName;
//- (BOOL)checkCondition:(NSString *)condition;
//-(NGNodeData *)getNodeByID:(NSString *)nodeId;
//- (id)getDynamicVariable:(NSString *)key;
//- (void)getGuideConfigs:(NSString *)configID completeBlock:(NGGuideServiceCompleteBlock)completeBlock;
//- (void)clear;
@end
