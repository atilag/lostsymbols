#include <cutils/log.h>

/* This is needed by Samsung's camera HAL (camera.exynos4.so). It's normally defined in the SKIA library that comes with Samsung Galaxy S2,
   but the one we use in FirefoxOS doesn't define this symbol. */
/*extern "C" void _ZN9SkTextBoxC1Ev()
{
   LOGD("liblostsymbols.so: SkTextBox() called!");
}*/

/* This is needed by Samsung's audio HAL. This symbol is defined in a modified version of libmedia library that comes with Samsung Galaxy S2 ICS firmware. This is the implemntation that Cyanogenmod uses. */
typedef enum {
    AUDIO_STREAM_DEFAULT          = -1,
    AUDIO_STREAM_VOICE_CALL       = 0,
    AUDIO_STREAM_SYSTEM           = 1,
    AUDIO_STREAM_RING             = 2,
    AUDIO_STREAM_MUSIC            = 3,
    AUDIO_STREAM_ALARM            = 4,
    AUDIO_STREAM_NOTIFICATION     = 5,
    AUDIO_STREAM_BLUETOOTH_SCO    = 6,
    AUDIO_STREAM_ENFORCED_AUDIBLE = 7, /* Sounds that cannot be muted by user and must be routed to speaker */
    AUDIO_STREAM_DTMF             = 8,
    AUDIO_STREAM_TTS              = 9,

    AUDIO_STREAM_CNT,
    AUDIO_STREAM_MAX              = AUDIO_STREAM_CNT - 1,
} audio_stream_type_t;

extern "C" bool _ZN7android11AudioSystem17isSeparatedStreamE19audio_stream_type_t(audio_stream_type_t stream)
{
    LOGD("liblostsymbols.so: android::AudioSystem::isSeparatedStream(audio_stream_type_t) called!");
    LOGD("liblostsymbols.so: audio_stream_type_t: %d", stream);

/* this is the correct implementation, but breaks headset volume rocker.
    if (stream == 3  || stream == 9  || stream == 10
     || stream == 12 || stream == 13 || stream == 14)
    {
        LOGD("isSeparatedStream: true");
        return true;
    }
*/

    LOGD("liblostsymbols.so: isSeparatedStream: false");
    return false;
}

