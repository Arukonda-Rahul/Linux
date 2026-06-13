#include <stdio.h>

int main() {
    char m[100], s[10], n[10], z[100];
    printf("enter main string:\n");
    scanf("%[^\n]s", m);
    printf("enter substring:\n");
    scanf("%s", s);
    printf("enter string to be replaced:\n");
    scanf("%s", n);

    int l1 = 0, l2 = 0;
    while (s[l1] != '\0')
    {
        l1++;
    }
    while (n[l2] != '\0') 
    {
        l2++;
    }

    int i, j, k;
    for (i = j = 0, k = 0; m[i]; i++)
    {
        if (m[i] == s[j])
        {
            j++;
            if (s[j] == '\0') 
            {
                for (int l = 0; l < l2; l++) 
                {
                    z[k++] = n[l];
                }
                j = 0; // Reset j after replacing the substring
            }
        } 
        else 
        {
            for (int l = i - j; l <= i; l++) 
            {
                z[k++] = m[l];
            }
            j = 0; // Reset j if characters do not match
        }
    }
    z[k] = '\0';
    printf("%s\n", z);

    return 0;
}

