#include <stdio.h>

int main()
{
    int w;
    printf("enter day:");
    scanf("%d",&w);
    switch(w)
    {
    case 1:printf("sunday");
    break;
    case 2:printf("Monday");
    break;
    case 3:printf("tuesday");
    break;
    case 4:printf("wednesday");
    break;
    case 5:printf("thursday");
    break;
    case 6:printf("friday");
    break;
    case 7:printf("saturday");
    break;
    default:printf("enter valid day");
    break;
    }

    return 0;
}

