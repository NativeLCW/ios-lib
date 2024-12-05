//
//  NGMinLengthData.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGBaseData.h"

@interface NGMinLengthData : NGBaseData

@property (nonatomic) NSInteger length;
@property (nonatomic, copy) NSString *error;

- (BOOL)checkValidate:(NSInteger)length;

@end
