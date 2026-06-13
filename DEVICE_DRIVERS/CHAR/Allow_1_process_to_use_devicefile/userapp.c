#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
        int fd;

        fd = open("/dev/my_own_char", O_RDWR);

        if (fd < 0) {
                perror("open");
                return -1;
        }

        printf("Device opened successfully\n");
        printf("Press Enter to close device...\n");

        getchar();

        close(fd);

        printf("Device closed\n");

        return 0;
}
