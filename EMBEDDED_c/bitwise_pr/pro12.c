/*
12. WAP Check if the 20th bit of a 32-bit integer is on or off?
*/
#include<stdio.h>
int main()
{
    int a;
    printf("enter no:\n");
    scanf("%d",&a);
    if(a&(0x1<<20))
    {
        printf("ON");
    }
    else
    {
        printf("OFF");
    }
    
    return 0;
}

/*OUTPUT:
enter no:
1048576
ON
*/

