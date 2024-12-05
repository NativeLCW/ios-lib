//
//  NGValidationResult.h
//  NuanceGuideSDK
//
//  Copyright © 2018 Nuance. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NGValidationResult : NSObject

@property (nonatomic, assign) BOOL result;
@property (nonatomic, copy) NSString *error;
@property (nonatomic, copy) NSString *foreignWidgetId;

@end
