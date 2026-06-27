#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};

    printf("Enter first string: ");
    gets(str1);   // or use fgets in modern C

    printf("Enter second string: ");
    gets(str2);

    int i = 0;

    // If lengths are different, not anagrams
    while (str1[i] != '\0') i++;
    int len1 = i;

    i = 0;
    while (str2[i] != '\0') i++;
    int len2 = i;

    if (len1 != len2) {
        printf("Not Anagrams\n");
        return 0;
    }

    // Count frequency of first string
    for (i = 0; str1[i] != '\0'; i++) {
        freq[(unsigned char)str1[i]]++;
    }

    // Subtract frequency using second string
    for (i = 0; str2[i] != '\0'; i++) {
        freq[(unsigned char)str2[i]]--;
    }

    // Check if all frequencies are zero
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not Anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");

    return 0;
}