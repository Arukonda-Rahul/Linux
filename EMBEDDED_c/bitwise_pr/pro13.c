/*13. Write a functionsetbits(x,p,n,y)that return x with then bits that begin at position p
 set to the rightmost n bits of y, leaving the other bits unchanged.
e.g. if x = 10101010 (170 decimal) and y = 10100111 (167 decimal) and n = 3 and p = 6 then
you need to strip off 3 bits of y (111) and put them in x at position 10xxx010 to get answer
10111010. Your answer should print out the result in binary form although input can be in
decimal form.
Your output should be like this:
x = 10101010 (binary)
y = 10100111 (binary)
setbits n = 3, p = 6 gives x = 10111010 (binary).
*/


#include <stdio.h>
int setbits(int x,int p,int n,int y)
{
    int sum=0,i,s;
    for(i=0;i<n;i++)
    {
        s=y&(0x1<<i);
        sum=sum|s;
    }
    sum=sum<<((p-n)+1);
    for(i=0;i<n;i++)
    {
        x=x&(~(0x1<<p));
        p--;
    }
    sum=x|sum;
    return sum;
}
void binary(int a)
{
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
}
int main()
{
    int x,y,n,p;
    printf("enter value of x:\n");
    scanf("%d",&x);
    printf("enter value of y:\n");
    scanf("%d",&y);
    printf("binary value of x:\n");
    binary(x);
    printf("\nbinary value of y:\n");
    binary(y);
    printf("\nenter no of bits to shift:\n");
    scanf("%d",&n);
    printf("enter position:\n");
    scanf("%d",&p);
    int r=setbits(x,p,n,y);
    binary(r);
    return 0;
}

