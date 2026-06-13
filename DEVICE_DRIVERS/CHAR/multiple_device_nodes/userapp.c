#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
    char buffer[50];
    int fd1, fd2;
    ssize_t length;

    fd1 = open("/dev/msg1", O_RDWR);
    if (fd1 < 0) {
        perror("open fd1");
        exit(EXIT_FAILURE);
    }

    fd2 = open("/dev/msg2", O_RDWR);
    if (fd2 < 0) {
        perror("open fd2");
        close(fd1);
        exit(EXIT_FAILURE);
    }

    /* Write through msg1 */
    length = write(fd1, "hello world", strlen("hello world"));

    if (length < 0) {
        perror("write");
        close(fd1);
        close(fd2);
        exit(EXIT_FAILURE);
    }

    printf("Bytes written: %zd\n", length);

    /* Reset fd2 offset to beginning */
    if (lseek(fd2, 0, SEEK_SET) < 0) {
        perror("lseek");
        close(fd1);
        close(fd2);
        exit(EXIT_FAILURE);
    }

    /* Clear userspace buffer */
    memset(buffer, 0, sizeof(buffer));

    /* Read using msg2 */
    length = read(fd2, buffer, sizeof(buffer) - 1);

    if (length < 0) {
        perror("read");
        close(fd1);
        close(fd2);
        exit(EXIT_FAILURE);
    }

    buffer[length] = '\0';

    printf("Read from msg2: \"%s\"\n", buffer);
    printf("Bytes read: %zd\n", length);

    close(fd1);
    close(fd2);

    return 0;
}
