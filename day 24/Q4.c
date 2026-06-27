#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};

    printf("Enter string: ");
    gets(str);

    printf("After removing duplicates: ");

    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 0) {
            printf("%c", str[i]);
            freq[(unsigned char)str[i]] = 1;
        }
    }

    return 0;
}