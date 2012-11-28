#include <cutils/log.h>

/* This is needed by Samsung's camera HAL (camera.exynos4.so). It's normally defined in the SKIA library that comes with Samsung Galaxy S2,
   but the one we use in FirefoxOS doesn't define this symbol. */
extern "C" void _ZN9SkTextBoxC1Ev()
{
   LOGD("libundefined.so: SkTextBox() called!");
}

/* This is needed by Samsung's audio HAL. This symbol is defined in a modified version of libmedia library that comes with Samsung Galaxy S2 ICS firmware. This is the implemntation that Cyanogenmod uses. */
extern "C" bool _ZN7android11AudioSystem17isSeparatedStreamE19audio_stream_type_t(audio_stream_type_t stream)
{
    LOGD("android::AudioSystem::isSeparatedStream(audio_stream_type_t) called!");
    LOGD("audio_stream_type_t: %d", stream);

/* this is the correct implementation, but breaks headset volume rocker.
    if (stream == 3  || stream == 9  || stream == 10
     || stream == 12 || stream == 13 || stream == 14)
    {
        LOGD("isSeparatedStream: true");
        return true;
    }
*/

    LOGD("isSeparatedStream: false");
    return false;
}

