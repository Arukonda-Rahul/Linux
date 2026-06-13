/*11 Write a function to return the average of marks of all students in a class*/
int average(int marks[],int s)
{
    int sum=0,avg,i;
    for(i=0;i<s;i++)
    {
        sum+=marks[i];
    }
    return sum/s;
}

#include<stdio.h>
int main()
{
    int i=0,n,sub,avg=0,sum=0,indavg=0;
    printf("enter no of students:\n");
    scanf("%d",&n);
    printf("enter no of subjects:\n");
    scanf("%d",&sub);
    int students[n];
    int subjects[sub];
    while(i<n)
    {
        sum=0;
        printf("enter marks of student:%d\n",i+1);
        for(int i=0;i<sub;i++)
        {
            printf("enter sub marks:\n");
            scanf("%d",&subjects[i]);
        }
        indavg=average(subjects,sub);
        students[i]=indavg;
        i++;
    }
    avg=average(students,n);
    printf("the average marks is:%d",avg);
    
}

