/* 13) write a function to take 2 arrays as input and return 1 if they are equal and 0 if they are not equal
( sizes to be sent as seperate arguments)*/

#include<stdio.h>
int equal(int a[],int b[],int s1,int s2)
{
    int c=0;
    if(s1==s2)
    {
        for(int i=0;i<s1;i++)
        {
            if(a[i]==b[i])
            {
                c++;
            }
        }
        if(c==s1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}
int main()
{
    int i,s1,s2;
    printf("enter size of array1:\n");
    scanf("%d",&s1);
    printf("enter size of array2:\n");
    scanf("%d",&s2);
    int a1[s1],a2[s2],res;
    printf("enter elements into array1:\n");
    for(int i=0;i<s1;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("enter elements into array2:\n");
    for(int i=0;i<s2;i++)
    {
        scanf("%d",&a2[i]);
    }
    res=equal(a1,a2,s1,s2);
    printf("%d",res);
    
}
