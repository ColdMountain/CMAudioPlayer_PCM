//
//  CMAuidoPlayer_PCM.h
//  iOS面试Dem
//
//  Created by ColdMountain on 2020/10/12.
//  Copyright © 2020 ColdMountain. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CMEnum.h"

@interface CMAuidoPlayer_PCM : NSObject

- (instancetype)initWithAudioUnitPlayerSampleRate:(CMAudioSampleRate)sampleRate;

- (void)kl_stop;

- (void)kl_play;

- (void)kl_playAudioWithData:(char*)pBuf andLength:(ssize_t)length;

@property (nonatomic, assign) CMAudioSampleRate audioRate;
@property (nonatomic, assign) int channelsPerFrame;//声道数
@property (nonatomic, assign) int bitsPerChannel;//位深
@end

