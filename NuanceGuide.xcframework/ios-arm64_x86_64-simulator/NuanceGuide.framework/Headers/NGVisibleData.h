//
//  NGVisibleData.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGBaseData.h"

@interface NGVisibleData : NGBaseData

@property (nonatomic, strong) NSNumber *isVisible;
@property (nonatomic, copy) NSString *guard;
@property (nonatomic, copy) NSString *trigger;

- (void)executeGuard;

@end
