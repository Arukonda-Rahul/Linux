/*7)Write a program to find the biggest of three numbers using pointers that point to those numbers.
*/
#include <stdio.h>
int main()
{
    int *p1,*p2,*p3;
    int x,y,z;
    printf("enter x,y and z values:\n");
    scanf("%d%d%d",&x,&y,&z);
    p1=&x;
    p2=&y;
    p3=&z;
    if(*p1>*p2)
    {
        if(*p1>*p3)
        {
            printf("%d is bigger",*p1);
        }
    }
    else if(*p2>*p3)
    {
        printf("%d is bigger",*p2);
    }
    else
    {
        printf("%d is bigger",*p3);
    }
    return 0;
    
}
