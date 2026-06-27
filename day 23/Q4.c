#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int max = 0;
    char maxChar;

    printf("Enter a string: ");
    gets(str);   // or use fgets in modern C

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Find maximum occurring character
    for (int i = 0; i < 256; i++) {
        if (freq[i] > max && i != ' ') {
            max = freq[i];
            maxChar = i;
        }
    }

    printf("Maximum occurring character = %c\n", maxChar);
    printf("Frequency = %d\n", max);

    return 0;
}