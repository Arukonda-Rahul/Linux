/*
8. WAP to convert Little endian integer to Big endian integer 
*/
#include<stdio.h>
int main()
{
    int a;
    printf("enter hex no:\n");
    scanf("%x", &a);
    a = ((a<<24)&0xFF000000)|((a<<8)&0x00FF0000)|((a>>8)&0x0000FF00)|((a>>24)&0x000000FF);
    printf("Big endian representation: %x\n", a);
    return 0;
}

