#include<stdio.h>
int main()
{
    int n,i;
    printf("enter size of array:\n");
    scanf("%d",&n);
    float b[n]={1.0,2.0};
    for(i=0;i<n;i++)
    {
        scanf("%f",&b[i]);
    }
    printf("elements of array array:\n");
    for(i=0;i<n;i++)
    {
        printf("%f\n",b[i]);
    }
}


/* OUTPUT

main.c: In function ‘main’:
main.c:7:5: error: variable-sized object may not be initialized
    7 |     int b[n]={1.0,2.0};
      |     ^~~

IF we take float b[10]={1.0,2.0};
then it works(size of array is fixed)

*/
