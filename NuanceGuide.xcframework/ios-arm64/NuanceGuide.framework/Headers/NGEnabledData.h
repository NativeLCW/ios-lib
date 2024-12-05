//
//  NGEnabledData.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGBaseData.h"

@interface NGEnabledData : NGBaseData

@property (nonatomic, strong) NSNumber *enabled;
@property (nonatomic, copy) NSString *guard;
@property (nonatomic, copy) NSString *trigger;

- (void)excuteGuard;

@end
