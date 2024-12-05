//
//  NGEnumBaseData.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGBaseData.h"


@interface NGEnumBaseData : NGBaseData
@property (copy, nonatomic) NSString   *stringValue;
@property (assign, nonatomic) NSInteger   enumValue;

-(id)init:(NSInteger)enumValue;
-(id)initWithString:(NSString *)stringValue;
- (NSDictionary *)stringValueDic;
@end
