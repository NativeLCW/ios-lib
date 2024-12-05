//
//  NGToData.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGBaseData.h"
#import "NGGuardData.h"

@interface NGToData : NGBaseData

@property (nonatomic, copy) NSString *to;
@property (nonatomic, strong) NSArray *guardList;
@property (nonatomic, strong) NSMutableArray *actionList;
- (void)parseData:(NSDictionary *)dict;
@end
