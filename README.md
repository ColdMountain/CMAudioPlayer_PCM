# CMAudioPlayer_PCM
AudioUnit播放PCM数据流

通过数组的方式添加数据随着播放时间的增长会导致内存增长（存在缺陷），需要在播放器Close的时候清除数据。
