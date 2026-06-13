#include<stdio.h>
int main()
{
    int arr[]={1,2,2,3,3,3,4,5,6,6,7,8,8,8,9,0,0,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i,j,k;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<size;k++)
                {
                    arr[k]=arr[k+1];
                }
                size--;
            i--;
            }
        }
    }
        for(i=0;i<size;i++)
        {
            printf("%d ",arr[i]);
        }
        return 0;
}
