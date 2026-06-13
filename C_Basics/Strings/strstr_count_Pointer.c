#include <stdio.h>
#include <string.h>

int main() {
    char m1[100], s[10];
    
    printf("Enter main string:\n");
    scanf("%[^\n]", m1);

    printf("Enter substring:\n");
    scanf("%s", s);

    int c=0;
    char *ptr=m1;
    while((ptr=strstr(ptr,s))!='\0')
    {
        c++;
        ptr+=strlen(s);
    }
    printf("%d", c);

    return 0;
}

