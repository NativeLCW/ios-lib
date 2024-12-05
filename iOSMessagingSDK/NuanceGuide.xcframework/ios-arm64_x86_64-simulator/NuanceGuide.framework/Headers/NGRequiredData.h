//
//  NGRequiredData.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGBaseData.h"

@interface NGRequiredData : NGBaseData

@property (nonatomic) BOOL isRequired;
@property (nonatomic, copy) NSString *error;

- (BOOL)checkValidate:(NSString *)value;

@end
