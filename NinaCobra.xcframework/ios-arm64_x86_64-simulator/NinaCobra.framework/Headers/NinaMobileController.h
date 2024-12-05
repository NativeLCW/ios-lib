//
//  NinaCobraApi.h
//  NinaCobraApi
//
//  Created by Vishal Gaikwad on 27/03/18.
//  Copyright © 2018 Vishal Gaikwad. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import "NinaServerConfiguration.h"
#import "SynthesisValues.h"
#import "AudioPlayer.h"
#import "UtilClass.h"
#import "AudioRecorder.h"
#import "MessageQueue.h"
#import "NinaSetting.h"

@class JFRWebSocket;

@protocol MMFConnectionNotificationDelegate <NSObject> // CONNECTION

-(void) connected;
-(void) connectionFailed:(NSError*_Nullable) error;
-(void) disconnected;
-(void) disconnectedOnBackgrounding;
@end

@protocol NinaMobileRecognitionResponseDelegate <NSObject> // SPEECH REC

-(void) recognitionNoMatch;
-(void) recognitionNoInput;
-(void) recognitionCancelled;
-(void) recognitionIntermediateResponseAvailable:(NSString* _Nullable) text;
-(void) recognitionFinalTranscriptionResponseAvailable:(NSString* _Nullable) text;
@end

@protocol MMFAudioProgressNotificationDelegate <NSObject> // SPEECH REC

-(void) recognitionStarted;
-(void) recognitionStartOfSpeechDetected;
-(void) recognitionEndOfSpeechDetected;
-(void) recognitionStopped;
-(void) recognitionEnergyDetected:(float)energy;
@end

@protocol MMFTTSPlayBackNotificationDelegate <NSObject> // SPEECH SYS

-(void) playbackStarted;
-(void) playbackStopped;
-(void) playbacksCompleted; // when queue is empty
-(void) errorDuringPlayback:(NSError*_Nullable) error;
@end

// NinaCobraDelegate protocol is used to delegate message.
@protocol NinaCobraDelegate <NSObject>

-(void) recognitionEndOfPlayDetected;
-(void) recognitionTextDetected:(NSString*_Nullable)string;
-(void) didReceiveError:(NSString*_Nullable)errorMesaage;

@end

@interface NinaMobileController : NSObject <AudioRecorderDelegate,AudioPlayerDelegate>

//delegates
@property(nonatomic,weak) _Nullable id<NinaCobraDelegate> delegate;
@property(nonatomic,weak) _Nullable id<MMFConnectionNotificationDelegate> connectionNotificationDelegate;
//@property(nonatomic,weak) _Nullable id<NinaMobileRecognitionResponseDelegate> ninaMobileRecognitionResponseDelegate;
//@property(nonatomic,weak) _Nullable id<MMFAudioProgressNotificationDelegate> audioProgressNotificationDelegate;
//@property(nonatomic,weak) _Nullable id<MMFTTSPlayBackNotificationDelegate> playBackNotificationDelegate;

#pragma mark Establishing a connection

/*!
     @brief
 This method is used get the nina setting object.
     @discussion
 This method is used get the nina setting object.
 */

-(NinaSetting* _Nullable) getNinaSettingInstance;

/*!
     @brief
 This method is used set the nina settings.
     @discussion
 This method is used set the nina settings.
 */

-(void) setNinaSettings:(NinaSetting* _Nullable) ninaSetting;
/*!
     @brief
 This method is used initialise the class with starting the websocket connection to carry further communication.
     @discussion
 This method accepts the url required to start the web socket connection.
     @param ninaServerConfiguration
 The input value required to initialise connection using web socket.
 */

- (nonnull instancetype)initWithNinaMobileControllerWithNinaServerConfiguration:(NinaServerConfiguration * _Nullable)ninaServerConfiguration connectionDelegate:(id _Nullable)connectionDelegate;

/*!
     @brief
 This method is used connect the session.
     @discussion
 This method is used connect the session.
 */
-(void) nimConnect;

/*!
     @brief
 This method is used end the started session.
     @discussion
 This method is used to disconnect the socket connection and inform server to close the connection.
 */

-(void) nimDisconnect;

#pragma mark Speech Recognition
/*!
     @brief
 This method is used to start recording user voice and convert it to text.
     @discussion
 This method is used to start the listener for audio recording, send audio data to server and get the plain text.
 */

-(void) startListeningAndDoRecognition;

/*!
     @brief
 This method is used to stop recording user voice and convert it to text.
     @discussion
 This method is used to stop the listener for audio recording, send audio data to server and get the plain text.
 */

-(void) stopListening;

/*!
     @brief
 This method is used to cancel the recording process.
     @discussion
 This method is used to cancel the recording process and send cancel command to server.
 */

-(void) cancelListening;

#pragma mark Speech Synthesize
/*!
     @brief
 This method is used to create message queue of the passed text.
     @discussion
 This method is used to create message queue by addding message to message array.
 @param inputText
 The input value is text message.
 */

-(void) startPlaybackOf:(NSString * _Nullable)inputText;

/*!
     @brief
 This method is used to play the added message queue.
     @discussion
 This method is used to play the added message queue.
 */
//-(void) startPlayback;

/*!
     @brief
 This method is used to stop the player.
     @discussion
 This method is used to stop the player which is running for agent message.
 */
//-(void)stopPlayingAgentMessage;

/*!
     @brief
 This method is used to stop playback of current and all queued prompts.
     @discussion
 This method is used to stop playback of current and all queued prompts.
 */

-(void)stopPlayback;

/*!
     @brief
        This method is used check if internet is avalibale or not.
     @discussion
        This method is used check if internet is avalibale or not.
 */
-(Boolean) isInternetAvalibale;

+ (NinaMobileController* _Nullable ) getInstance;

- (void) addRecognitionResponseDelegage:(id<NinaMobileRecognitionResponseDelegate>_Nonnull)delegate;
- (void) removeRecognitionResponseDelegate:(id<NinaMobileRecognitionResponseDelegate>_Nonnull)delegate;

- (void) addRecorderProgressDelegage:(id<MMFAudioProgressNotificationDelegate>_Nonnull)delegate;
- (void) removeRecorderProgressDelegate:(id<MMFAudioProgressNotificationDelegate>_Nonnull)delegate;

- (void) addTTSPlaybackDelegage:(id<MMFTTSPlayBackNotificationDelegate>_Nonnull)delegate;
- (void) removeTTSPlaybackDelegate:(id<MMFTTSPlayBackNotificationDelegate>_Nonnull)delegate;

-(Boolean) isPlaying;
-(Boolean) isRecording;

@end
