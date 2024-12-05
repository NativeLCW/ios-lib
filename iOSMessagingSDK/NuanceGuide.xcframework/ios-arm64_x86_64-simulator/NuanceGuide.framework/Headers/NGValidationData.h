//
//  NGValidationData.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGBaseData.h"
#import "NGMaxLengthData.h"
#import "NGMinLengthData.h"
#import "NGPatternData.h"
#import "NGRequiredData.h"
#import "NGValidationResult.h"

@interface NGValidationData : NGBaseData

@property (nonatomic, strong) NGRequiredData *required;
@property (nonatomic, strong) NGMaxLengthData *maxLength;
@property (nonatomic, strong) NGMinLengthData *minLength;
@property (nonatomic, strong) NGPatternData *pattern;

- (NGValidationResult *)checkValidationByString:(NSString *)validationString;
- (NGValidationResult *)checkValidationByInt:(NSInteger)validationInt;
- (NGValidationResult *)checkValidationByCheckList:(NSArray *)checkItems;
- (NGValidationResult *)checkValidationByIndex:(int)validationIndex;

@end
