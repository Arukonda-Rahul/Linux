/*8 Take three input integers x,y and z. Write a program to rotate their values such that, 
x has the value of y, y has the value of z and z has the value of x.
Do this using pointers that point to x,y and z.
*/
#include <stdio.h>
int main()
{
    int *p1,*p2,*p3;
    int x,y,z;
    printf("enter x,y and z values:\n");
    scanf("%d%d%d",&x,&y,&z);
    printf("before change\n x=%d\ny=%d\nz=%d\n",x,y,z);
    p1=&x;
    p2=&y;
    p3=&z;
    int temp=0;
    temp=*p1;
    *p1=*p2;
    *p2=*p3;
    *p3=temp;
    printf("after change \nx=%d\ny=%d\nz=%d\n",x,y,z);
    return 0;
    
}
