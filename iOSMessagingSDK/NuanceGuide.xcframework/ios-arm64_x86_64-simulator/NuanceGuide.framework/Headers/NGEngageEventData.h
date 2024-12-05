//
//  NGEngageEventData.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGBaseData.h"

@interface NGEngageEventData : NGBaseData

@property (nonatomic, copy) NSString *type;
@property (nonatomic, strong) NSDictionary *data;
@property (nonatomic, strong) NSDictionary *datapass;
@property (nonatomic, strong) NSDictionary *agentAttributes;
@property (nonatomic, copy) NSString *buzy;
@property (nonatomic, copy) NSString *offline;
@property (nonatomic, copy) NSString *isNotHop;

- (BOOL)getCheckAgent;

@end
