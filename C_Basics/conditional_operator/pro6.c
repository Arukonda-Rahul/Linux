#include <stdio.h>
int main()
{
    char c;
    printf("enter character:");
    scanf("%c",&c);
    (c>='a'&&c<='z')?(printf("%c",c-32)):((c>='A'&&c<='Z')?printf("%c",c+32):printf("it is not an Alphabet"));
    return 0;
}

