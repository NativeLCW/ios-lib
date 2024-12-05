//
//  NGConstantData.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGBaseData.h"

@interface NGConstantData : NGBaseData

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *value;
+ (NGConstantData *)sharedInstance;
+ (void)resetSharedInstance;
@end
