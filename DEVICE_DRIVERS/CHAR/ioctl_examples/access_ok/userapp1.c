#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>

#include "ioctl_cmd.h"

int main(void)
{
        int fd;
        unsigned long long ptr;

        fd = open("/dev/msg", O_RDWR);
        if (fd < 0) {
                perror("open");
                return 1;
        }

        if (ioctl(fd, MSG_GET_ADDRESS, &ptr) < 0) {
                perror("ioctl");
                return 1;
        }

        printf("Kernel Buffer Address : 0x%llx\n", ptr);

        close(fd);
        return 0;
}
