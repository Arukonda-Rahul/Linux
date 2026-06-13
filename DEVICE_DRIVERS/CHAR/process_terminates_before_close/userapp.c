#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{

	int fd = open("/dev/my_own_char", O_RDWR);

while (1);
        return 0;
}
