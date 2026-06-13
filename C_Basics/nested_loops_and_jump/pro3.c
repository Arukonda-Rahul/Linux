 /*Read m subject marks of n students ( take number of subjects as input for every student, and 
 accordingly read the marks and calculate percentage ) and print who is the topper. 
 Assume every student chooses different number of subjects in their course.*/


#include<stdio.h>
int main()
{
    int m,s=0,i,j,n1,n2,c=0,total=0;
    float per=0,topper=0;
    printf("enter no of students:");
    scanf("%d",&n1);
    for(i=1;i<=n1;i++)
    {
        s=0;
        printf("enter no of subjects:\n");
        scanf("%d",&n2);
        total=n2*100;
        printf("enter subject marks:\n");
        for(j=1;j<=n2;j++)
        {
            scanf("%d",&m);
            s+=m;
        }
        per=s/(float)total*100.0;
        printf("total is:%d\n",s);
        printf("percentage is:%f\n",per);
        if(per>topper)
        {
            topper=per;
        }
    }
    printf("student with %f is topper",topper);
    
}

