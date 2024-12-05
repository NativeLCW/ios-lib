//
//  SessionValues.h
//  NinaCobraApi
//
//  Created by Vishal Gaikwad on 11/05/18.
//  Copyright © 2018 Vishal Gaikwad. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NinaServerConfiguration.h"

@interface SessionValues : NSObject

@property (nonatomic) NSString * _Nullable type;
@property (nonatomic) NSString * _Nullable commandName;
@property (nonatomic) NSString * _Nullable sessionId;
@property (nonatomic) NSString * _Nullable stepId;
@property (nonatomic) NSString  * _Nullable speechSynthesisCodec;
@property (nonatomic) NSString  * _Nullable speechRecognitionCodec;
@property (nonatomic) NSString  * _Nullable clientUserId;
@property (nonatomic) NSString  * _Nullable clientDeviceId;
@property (nonatomic) NSString  * _Nullable clientSessionId;
@property (nonatomic) NSString  * _Nullable clientOsName;
@property (nonatomic) NSString  * _Nullable clientOsVersion;

/*!
     @brief
 This method is used to get the start session command.
     @discussion
 This method is used to get the start session command string in json format with required parameters.
 */
-(NSString* _Nullable) getStartOfSessionString:(NinaServerConfiguration* _Nullable) ninaServerConfiguration;

/*!
     @brief
 This method is used to get the end session command.
     @discussion
 This method is used to get the end session command string in json format with required parameters.
 */
-(NSString* _Nullable) getEndOfSessionString;

/*!
     @brief
 This method is used to get the cancel session command.
     @discussion
 This method is used to get the cancel session command string in json format with required parameters.
 */
-(NSString* _Nullable) getCancelSessionString;

@end
