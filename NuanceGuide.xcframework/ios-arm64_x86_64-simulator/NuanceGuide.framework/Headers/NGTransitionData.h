//
//  NGTransitionData.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGBaseData.h"
#import "NGToData.h"

@interface NGTransitionData : NGBaseData

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *from;
@property (nonatomic, copy) NSString *trigger;
@property (nonatomic, strong) NGToData *toData;

@end
