#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>

#include "ioctl_cmd.h"

int main(void)
{
        int fd;
        unsigned long long kernel_addr;

        fd = open("/dev/msg", O_RDWR);
        if (fd < 0) {
                perror("open");
                return 1;
        }

        /*
         * First ioctl:
         * Get kernel buffer address.
         */
        if (ioctl(fd, MSG_GET_ADDRESS, &kernel_addr) < 0) {
                perror("ioctl");
                return 1;
        }

        printf("Kernel Address : 0x%llx\n", kernel_addr);

        printf("Passing kernel address back to driver...\n");

        /*
         * Second ioctl:
         * Deliberately wrong.
         */
        if (ioctl(fd,
                  MSG_GET_ADDRESS,
                  (void *)kernel_addr) < 0)
                perror("Expected failure");

        close(fd);
        return 0;
}
