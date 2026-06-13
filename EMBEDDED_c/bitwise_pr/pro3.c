/*
3. WAP to count the bits set (bit value 1 ) in an integer? Find out and compare different possibilities?
*/

//POSIBILITY:1

#include <stdio.h>
int main()
{
    int a,c=0;
    printf("enter value of a:\n");
    scanf("%d",&a);
    int i=0;
    while(i<32)
    {
        if(a&0x80)
        {
            c++;
        }
        a=a<<1;
    i++;
    }
    printf("%d",c);
    return 0;
}


/*OUTPUT:
enter value of a:
15
4*/


//POSSIBILITY:2


#include <stdio.h>
int main()
{
    int a,c=0;
    printf("enter value of a:\n");
    scanf("%d",&a);
    while(a>0)
    {
        c++;
        a=a&(a-1);
    }
    printf("%d",c);
    return 0;
}



/*  OUTPUT:
enter value of a:
255
8*/



