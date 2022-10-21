#include <cfg/os.h>
#include <cfg/mmci.h>

#include <string.h>
#include <io.h>
#include <fcntl.h>
#include <time.h>

#include <dev/board.h>
#include <dev/gpio.h>

#include <sys/version.h>
#include <sys/thread.h>
#include <sys/timer.h>
#include <sys/heap.h>
#include <sys/socket.h>



/* 
 * Main application routine.
 *
 * Nut/OS automatically calls this entry after initialization.
 */
int main(void)
{
    uint32_t baud = 115200;
    uint8_t  i;
    int      rc;

    uint8_t  mac[] = DEFAULT_MAC; /* MAC address that shall be assigned to the ethernet device */


    /*
     * Initialize the uart device.
     */
    NutRegisterDevice(&DEV_UART0, 0, 0);
    freopen(DEV_UART0_NAME, "w", stdout);
    freopen(DEV_UART0_NAME, "w", stderr);
    freopen(DEV_UART0_NAME, "r", stdin);
    _ioctl(_fileno(stdout), UART_SETSPEED, &baud);
    
    printf("\n\neNet-sam7X Serial Test. Nut/OS Version %s\r\n", NutVersionString());

    
    /*
     * We could do something useful here. In this case we are just setting
     * the main thread to the lowest priority and are just waiting.
     */
    NutThreadSetPriority(254);
    for (;;) {
        NutSleep(6000);
    }
    return 0;
}
