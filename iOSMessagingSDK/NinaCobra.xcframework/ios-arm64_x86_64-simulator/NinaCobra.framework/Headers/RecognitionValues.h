//
//  SpeechRecognition.h
//  NinaCobraApi
//
//  Created by Vishal Gaikwad on 09/04/18.
//  Copyright © 2018 Vishal Gaikwad. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UtilClass.h"

@interface RecognitionValues : NSObject

@property (nonatomic) NSString *type;
@property (nonatomic) NSString *sessionId;
@property (nonatomic) NSString *commandName;
@property (nonatomic) NSString *stepId;
@property (nonatomic) NSDictionary *parameters;
@property (nonatomic) BOOL endPointDetection;
@property (nonatomic) NSString *speechDetector;
@property (nonatomic) int beginNoiseSampleFrames;
@property (nonatomic) double voiceThreshold;
@property (nonatomic) int startOfSpeechVoicedFrames;
@property (nonatomic) int startOfSpeechHistoryFrames;
@property (nonatomic) int endOfSpeechVoicedFrames;
@property (nonatomic) int endOfSpeechHistoryFrames;
@property (nonatomic) BOOL considerNegativeRatios;
@property (nonatomic) BOOL stopOnEndOfSpeech;
@property (nonatomic) BOOL wordStream;
@property (nonatomic) NSArray *activeDynamicVocabularySets;
@property (nonatomic) int startOfSpeechTimeoutSeconds;
@property (nonatomic) int utteranceMaxTimeSeconds;
@property (nonatomic) BOOL statistics;
@property (nonatomic) BOOL isNoiseLevelRequired;
@property (nonatomic) double mean;
@property (nonatomic) double standardDeviation;

/*!
     @brief
        This method is used to get the start SpeechRecognition command.
     @discussion
        This method is used to get the start SpeechRecognition command string in json format with required parameters.
 */
-(NSString*) getStartSpeechRecognitionString;

/*!
     @brief
        This method is used to get the stop SpeechRecognition command.
     @discussion
        This method is used to get the stop SpeechRecognition command string in json format with required parameters.
 */
-(NSString*) getStopSpeechRecognitionString;

/*!
     @brief
        This method is used to get the cancel SpeechRecognition command.
     @discussion
        This method is used to get the cancel SpeechRecognition command string in json format with required parameters.
 */
-(NSString*) getCancelSpeechRecognitionString;

@end
