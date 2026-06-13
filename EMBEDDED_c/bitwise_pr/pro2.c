/*   2. WAP print binary?     */


#include <stdio.h>
int main()
{
    int a;
    printf("enter value of a:\n");
    scanf("%d",&a);
    int i=0;
    while(i<8)
    {
        if(a&0x80)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        a=a<<1;
        i++;
    }
    return 0;
}
