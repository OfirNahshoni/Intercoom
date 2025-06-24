//
// Created by ofirnah on 6/23/25.
//

#include "MediaManager.hpp"
#include "MediaManager.hpp"

intercoom::MediaManager::MediaManager() : m_mode(MediaMode::NONE)
{ }

void intercoom::MediaManager::Start(MediaMode mode)
{
    m_mode = mode;

    switch (m_mode)
    {
        case MediaMode::AUDIO_ONLY:
            // Get only live audio streaming
            break;

        case MediaMode::VIDEO_AUDIO:
            // get live audio & video streaming
            break;

        default:
            // do nothing
            break;
    }
}

void intercoom::MediaManager::Stop()
{
    m_mode = MediaMode::NONE;

    // stop any communication
}
