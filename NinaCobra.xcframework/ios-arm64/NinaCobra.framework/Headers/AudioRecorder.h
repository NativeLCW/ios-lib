
#import <UIKit/UIKit.h>
#import <AudioToolbox/AudioQueue.h>
#import <AudioToolbox/AudioFile.h>
#import <AVFoundation/AVFoundation.h>

#define NUM_BUFFERS 3
#define SECONDS_TO_RECORD 10

// Struct defining recording state
typedef struct
{
    AudioStreamBasicDescription  dataFormat;
    AudioQueueRef                queue;
    AudioQueueBufferRef          buffers[NUM_BUFFERS];
    AudioFileID                  audioFile;
    SInt64                       currentPacket;
    bool                         recording;
} RecordState;

// AudioRecorderDelegate to send audio packet.
@protocol AudioRecorderDelegate <NSObject>
/*!
     @brief
 This method is used send the audio data.
     @discussion
 This method is used send the current audio data (buffer).
     @param data
 The input value is the audio buffer packet.
 */
- (void)sendRecordingAudioBufferPacket:(NSData*) data;

/*!
     @brief
 This method is used send the audio data.
     @discussion
 This method is used send the current audio data (buffer).
     @param energy
 The input value is the audio recorder energy.
 */
-(void) energyDetected:(CGFloat) energy;

@end

@interface AudioRecorder : NSObject
{
    RecordState recordState;
    CFURLRef fileURL;
}
@property (nonatomic) id <AudioRecorderDelegate> delegate;
@property (nonatomic, strong) AVAudioRecorder *recorder;
@property (nonatomic) CADisplayLink *displaylink;
/*!
     @brief
 This method is used set up the format for audio data.
     @discussion
 This method is used set up the format for audio data, before recording.
     @param format
 The input value is the format description.
 */
//- (void)setupAudioFormat:(AudioStreamBasicDescription*)format;

/*!
     @brief
 This method is used to start the audio recording.
     @discussion
 This method is used to start the audio recording to record the audio packet and send to server.
 */
- (void)startRecording:(long)sampleRate;

/*!
     @brief
 This method is used to stop the audio recording.
     @discussion
 This method is used to stop the audio recording and clearing the buffer.
 */
- (void)stopRecording;

@end
