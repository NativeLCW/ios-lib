//
//  NGGuardData.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGBaseData.h"
#import "NGOnTrueData.h"
#import "NGOnFalseData.h"

@interface NGGuardData : NGBaseData

@property (nonatomic, copy) NSString *condition;
@property (nonatomic, strong) NGOnTrueData *onTrueData;
@property (nonatomic, strong) NGOnFalseData *onFalseData;

@end
