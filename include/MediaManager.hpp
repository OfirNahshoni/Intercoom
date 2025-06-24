//
// Created by ofirnah on 6/21/25.
//

#ifndef MEDIA_MANAGER_HPP
#define MEDIA_MANAGER_HPP

#include <memory>           // std::unique_ptr

namespace intercoom
{

class MediaManager
{
public:
    enum MediaMode
    {
        NONE = 0,
        AUDIO_ONLY = 1,
        VIDEO_AUDIO = 2
    };

    // should
    MediaManager();
    void Start(MediaMode mode = MediaMode::VIDEO_AUDIO);
    void Stop();
    void Mute();
    void UnMute();

private:
    MediaMode m_mode;
    // std::unique_ptr<AudioStrategy>
    // std::unique_ptr<VideoStrategy>
};    // class MediaManager

}    // namespace intercoom

#endif // MEDIA_MANAGER_HPP
