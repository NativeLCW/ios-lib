//
//  NGGuideEventData.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGBaseData.h"
#import "NGGuideEventTypeEnum.h"

@interface NGGuideEventData : NGBaseData

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *when;
@property (nonatomic, strong) NGGuideEventTypeEnum  *type;
@end
