

#include<stdio.h>
int mystrstr(char s1[], char s2[]) {
    int l1 = 0, l2 = 0, i = 0, j = 0;

    while (s1[i] != '\0') {
        l1++;
        i++;
    }
    i = 0;
    while (s2[i] != '\0') {
        l2++;
        i++;
    }

    for (i = 0; i <= l1 - l2; i++) {  // Adjusted loop range
        for (j = 0; j < l2; j++) {
            if (s1[i + j] != s2[j]) {
                break;
            }
        }
        if (j == l2) {
            return i;
        }
    }
    
    return -1;  // Return -1 if substring is not found
}

int main() {
    char s1[100];
    char s2[100];
    
    printf("Enter main string:\n");
    scanf("%[^\n]s", s1);
    printf("Enter substring:\n");
    scanf("%s", s2);
    
    int r = mystrstr(s1, s2);
    
    if (r != -1) {
        printf("Substring found at index: %d\n", r);
    } else {
        printf("Substring not found.\n");
    }
    
    return 0;
}

