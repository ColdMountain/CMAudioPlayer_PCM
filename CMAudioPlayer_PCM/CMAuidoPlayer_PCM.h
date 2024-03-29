//
//  CMAuidoPlayer_PCM.h
//  iOS面试Dem
//
//  Created by ColdMountain on 2020/10/12.
//  Copyright © 2020 ColdMountain. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    CMAudioPlayerSampleRate_Defalut = 8000,
    CMAudioPlayerSampleRate_22050Hz = 22050,
    CMAudioPlayerSampleRate_24000Hz = 24000,
    CMAudioPlayerSampleRate_32000Hz = 32000,
    CMAudioPlayerSampleRate_44100Hz = 44100,
} CMAudioPlayerSampleRate;

@interface CMAuidoPlayer_PCM : NSObject

- (instancetype)initWithAudioUnitPlayerSampleRate:(CMAudioPlayerSampleRate)sampleRate;

- (void)cm_stop;

- (void)cm_play;

- (void)cm_close;

- (void)kl_playAudioWithData:(char*)pBuf andLength:(ssize_t)length;

@property (nonatomic, assign) CMAudioPlayerSampleRate audioRate;
@end

