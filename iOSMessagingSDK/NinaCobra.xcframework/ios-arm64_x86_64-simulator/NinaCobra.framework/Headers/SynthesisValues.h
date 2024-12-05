//
//  StartSpeechSythesis.h
//  NinaCobraApi
//
//  Created by Vishal Gaikwad on 05/04/18.
//  Copyright © 2018 Vishal Gaikwad. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UtilClass.h"

@interface SynthesisValues : NSObject

@property (nonatomic) NSString *type;
@property (nonatomic) NSString *sessionId;
@property (nonatomic) NSDictionary *command;
@property (nonatomic) NSString *commandName;
@property (nonatomic) NSString *stepId;
@property (nonatomic) NSDictionary *parameters;
@property (nonatomic) NSString *parameterType;
@property (nonatomic) NSString *textToSpeechText;
@property (nonatomic) NSString *voice;
@property (nonatomic) BOOL statistics;
@property (nonatomic) NSString *cancelStepId;
@property (nonatomic) NSString *stopStepId;
@property (nonatomic) NSString *language;

/*!
     @brief
        This method is used to get the start SpeechSythesis command.
     @discussion
        This method is used to get the start SpeechSythesis command string in json format with required parameters.
 */
-(NSString*) getStartSpeechSythesisString;

/*!
     @brief
 This method is used to get the cancel SpeechSythesis command.
     @discussion
 This method is used to get the cancel SpeechSythesis command string in json format with required parameters.
 */
-(NSString*) getCancelSpeechSythesisString;

/*!
     @brief
 This method is used to get the stop SpeechSythesis command.
     @discussion
 This method is used to get the stop SpeechSythesis command string in json format with required parameters.
 */
-(NSString*) getStopSpeechSythesisString;

/*!
     @brief
        This method is used to get string in xml format.
     @discussion
        This method is used to get SpeechSythesis data value string in xml format with required parameters.
 */
-(NSString*) getSsmlString;
@end
