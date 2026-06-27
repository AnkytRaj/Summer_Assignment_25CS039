#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int f1[256] = {0}, f2[256] = {0};

    printf("Enter string 1: ");
    gets(s1);

    printf("Enter string 2: ");
    gets(s2);

    for (int i = 0; s1[i] != '\0'; i++)
        f1[(unsigned char)s1[i]]++;

    for (int i = 0; s2[i] != '\0'; i++)
        f2[(unsigned char)s2[i]]++;

    printf("Common characters: ");
    for (int i = 0; i < 256; i++) {
        if (f1[i] > 0 && f2[i] > 0)
            printf("%c ", i);
    }

    return 0;
}