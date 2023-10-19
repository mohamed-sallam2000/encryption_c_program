#include"loadingbar.h"
 void sleep_ms(int milliseconds) {
#ifdef _WIN32
    Sleep(milliseconds);
#else
    usleep(milliseconds * 1000); // usleep uses microseconds
#endif
}
