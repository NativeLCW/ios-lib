//
//  NGGuideRestService.h
//  NuanceMessagingCore
//
//  Copyright © 2018 nuance. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^NGGuideServiceCompleteBlock)(NSDictionary *responseDic, NSError *error);

@interface NGGuideRestService : NSObject

- (void)getGuideConfigs:(NSString *)configID completeBlock:(NGGuideServiceCompleteBlock)completeBlock;

@end
