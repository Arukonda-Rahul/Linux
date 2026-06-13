#include<stdio.h>
int main()
{
    int arr[]={9,0,1,6,3,2,7,5,8,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i,j,k;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
        for(i=0;i<size;i++)
        {
            printf("%d ",arr[i]);
        }
        return 0;
}
