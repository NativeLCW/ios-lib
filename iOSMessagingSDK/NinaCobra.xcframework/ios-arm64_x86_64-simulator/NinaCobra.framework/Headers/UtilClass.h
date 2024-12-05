//
//  UtilClass.h
//  NinaCobraApi
//
//  Created by Vishal Gaikwad on 10/04/18.
//  Copyright © 2018 Vishal Gaikwad. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "InternetConnectivity.h"

@interface UtilClass : NSObject
@property (nonatomic) InternetConnectivity* reach;
@property (nonatomic) Boolean isConnectedCalledOnce;
@property (nonatomic) Boolean isDisConnectedCalledOnce;

/*!
     @brief
 This method is used to init the class.
     @discussion
 This method is used to init the singleton class.
 */
+ (id)sharedManager ;

/*!
     @brief
 This method is used to print the passed string.
     @discussion
 This method is used to print the passed string.
 @param string
 This input is normal string required to print.
 */
-(void) print:(NSString*) string;

/*!
     @brief
 This method is used to validate the string value.
     @discussion
 This method is used to validate the string value if empty or not.
 @param string
 This input is normal string.
 */
-(BOOL) validateValue:(NSString*) string;

/*!
     @brief
 This method is used to get the json string from the dictionary.
     @discussion
 This method return json string using the dictionary passed to it.
 @param dict
 This input is the dictionary (key, value) used to create json string.
 */
-(NSString*) getJsonString:(NSMutableDictionary*) dict;

/*!
     @brief
 This method is used to get the current device OS version.
     @discussion
 This method is used to get the current device OS version.
 */
-(NSString*) getDeviceOSVersion;

/*!
     @brief
 This method is used to convert passed raw data to audio data.
     @discussion
 This method is used to convert passed raw data received from server and add wav header to it so that it can be played in audio player.
 @param wav
 This input is the pcm raw format audio data.
 */
-(NSData*) getAudioSound:(NSData*)wav withSampleRate:(long)sampleRate;

/*!
     @brief
 This method is used to check the status of internet connectivity.
     @discussion
 This method is used to check the status of internet connectivity.
 */

-(Boolean) isInternetConnected;

/*!
     @brief
 This method is used to setup the internet connectivity.
     @discussion
 This method is used to setup the internet connectivity.
 */
-(void) setupInternetConnectivity;

-(void)stopInternetCheck;

@end
