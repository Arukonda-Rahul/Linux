#include<stdio.h>
int main()
{
    int n=10,i,j;
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
for(i=0;i<n;i++)
{
	printf("%d ",arr[i]);
}
printf("\n");
    for(i=0;i<n;i++)
    {
        int max=arr[i];
        for(j=i+1;j<n;j++)
        {
            
            if(max==arr[j])
            {
                for(int k=j;k<n;k++)
                {
                    arr[k]=arr[k+1];
                }
                n--;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
