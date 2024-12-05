//
//  NGNodeData.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import "NGBaseData.h"
#import "NGFormControlData.h"

@protocol NGFormControlData;

@interface NGNodeData : NGBaseData

@property (nonatomic, copy)   NSString                              *nodeName;
@property (nonatomic, strong) NSDictionary<NGFormControlData>       *formControlsDic;
@property (nonatomic, strong) NSArray                               *formControls;
@property (nonatomic, assign) BOOL                                  showHeading;
@property (nonatomic,strong) NSDictionary       *context;

- (void)reset;
- (NSString *)getQuestion;

@end
