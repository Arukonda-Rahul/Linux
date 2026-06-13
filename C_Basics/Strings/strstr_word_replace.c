#include <stdio.h>
#include <string.h>

int main() {
    char m1[100], s[10], n[10], m2[100];
    
    printf("Enter main string:\n");
    scanf("%[^\n]s", m1);
    printf("Enter substring:\n");
    scanf("%s", s);
    printf("Enter substring to be replaced with:\n");
    scanf("%s", n);

    int i, j, k, l1 = 0, l2 = 0;
    while(s[l1]!='\0')
    {
        l1++;
    }
    while(n[l2]!='\0')
    {
        l2++;
    }
    

    for (i = j = 0; m1[i]; i++) 
    {
        if (m1[i] == s[j]) 
        {
            j++;
        }
        else 
        {
            j = 0;
        }

        if (s[j] == '\0') 
        {
            // Copy characters before the matched substring
            for (k = 0; k < i - l1 + 1; k++) 
            {
                m2[k] = m1[k];
            }

            // Copy the replacement string
            for (int l = 0; l < l2; l++)
            {
                m2[k++] = n[l];
            }

            // Copy the remaining characters from m1
            for (int l = i + 1; m1[l] != '\0'; l++)
            {
                m2[k++] = m1[l];
            }

            // Null-terminate m2
            m2[k] = '\0';

            // Print m2 after replacing the substring
            printf("%s", m2);
        }
    }

    return 0;
}

