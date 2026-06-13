/*9. WAP multiply a number by 9 using bit shift.
*/
#include<stdio.h>
int main()
{
    int a,c,r;
    printf("enter no:\n");
    scanf("%d",&a);
    c=a;
    r=(c<<3)+a;
    printf("%d",r);
    return 0;
}
//GIven input is leftshifted by 3 and added to the number
