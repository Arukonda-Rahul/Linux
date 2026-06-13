#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>

#define MY_MAGIC 'R'
#define CLEAR_BUFFER _IO(MY_MAGIC, 1)
#define GET_LENGTH   _IOR(MY_MAGIC, 2, int)

int main()
{
    int fd, len;

    fd = open("/dev/my_driver", O_RDWR);
    if (fd < 0) {
        perror("open");
        return 1;
    }

    write(fd, "hello kernel", 12);

    len = ioctl(fd, GET_LENGTH,10);
    printf("Length = %d\n", len);

   /* ioctl(fd, CLEAR_BUFFER);

    len = ioctl(fd, GET_LENGTH);
    printf("Length after clear = %d\n", len);*/

    close(fd);
    return 0;
}
