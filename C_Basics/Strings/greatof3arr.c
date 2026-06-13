#include <stdio.h>
int main() 
{
    int arr[] = {123, 11, 10, 25, 1, 987, 6, 33};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i,j,temp,n;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nenter which greatest no:\n");
    scanf("%d",&n);
    printf("%d greatest no:%d",n,arr[n-1]);
    return 0;
}

