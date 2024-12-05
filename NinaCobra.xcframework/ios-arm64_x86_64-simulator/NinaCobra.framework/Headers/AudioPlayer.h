//
//  AudioPlayer.h
//  NinaCobraApi
//
//  Created by Vishal Gaikwad on 10/04/18.
//  Copyright © 2018 Vishal Gaikwad. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

// AudioPlayerDelegate to send audio packet.
@protocol AudioPlayerDelegate <NSObject>
/*!
     @brief
 This method is used indicate the end of play.
     @discussion
 This method is used indicate the end of play.
 */
- (void)audioPlayerFinishPlaying;

@end

@interface AudioPlayer : NSObject <AVAudioPlayerDelegate>

@property (strong, nonatomic) AVAudioPlayer * player;
@property (nonatomic) id <AudioPlayerDelegate> delegate;

/*!
     @brief
 This method is used to initialise the class
     @discussion
 This method is used to initialise the class with variables.
     @param data
 The input value is the audio data packet to play.
 */
-(id)init:(NSData*) data;

/*!
     @brief
 This method is used play the audio player.
     @discussion
 This method is used play the audio player.
 */
-(void) play;

/*!
     @brief
 This method is used stop the audio player.
     @discussion
 This method is used stop the audio player.
 */
-(void) stop;

/*!
     @brief
 This method is used pause the audio player.
     @discussion
 This method is used pause the audio player.
 */
-(void) pause;

@end
