//
//  NinaSetting.h
//  NinaCobraApi
//
//  Created by Vishal Gaikwad on 11/05/18.
//  Copyright © 2018 Vishal Gaikwad. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SynthesisValues.h"
#import "RecognitionValues.h"
#import "SessionValues.h"

@interface NinaSetting : NSObject

@property (nonatomic) SynthesisValues * synthesisValues;
@property (nonatomic) RecognitionValues *recognitionValues;
@property (nonatomic) SessionValues * sessionValues;
@property (nonatomic) double serverTimeOut;
@property (nonatomic) BOOL audioSessionSettingEnabled;
@property (nonatomic) NSMutableArray *dynamicVocabularies;

-(NSString*) getDynamicVocabularyString;
@end
