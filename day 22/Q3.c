#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};   // for all ASCII characters

    printf("Enter a string: ");
    gets(str);   // or use fgets in modern C

    // Count frequency
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    printf("Character frequencies:\n");

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0 && i != ' ') {   // ignoring spaces
            printf("%c = %d\n", i, freq[i]);
        }
    }

    return 0;
}