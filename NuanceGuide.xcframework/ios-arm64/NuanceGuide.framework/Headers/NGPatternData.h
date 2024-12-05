//
//  NGPatternData.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGBaseData.h"

@interface NGPatternData : NGBaseData

@property (nonatomic, copy) NSString *pattern;
@property (nonatomic, copy) NSString *error;

- (BOOL)checkValidate:(NSString *)value;

@end
