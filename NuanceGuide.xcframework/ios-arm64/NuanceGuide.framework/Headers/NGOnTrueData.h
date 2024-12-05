//
//  NGOnTrueData.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGBaseData.h"
#import "NGEngageEventData.h"

@interface NGOnTrueData : NGBaseData

@property (nonatomic, copy) NSString *onTrue;
@property (nonatomic, strong) NGEngageEventData *engage;
@property (nonatomic, strong) NSMutableArray *actionList;

@end
