#include <stdio.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, max = 0;

    printf("Enter sentence: ");
    gets(str);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';

            if (j > max) {
                max = j;
                int k = 0;
                while (word[k] != '\0') {
                    longest[k] = word[k];
                    k++;
                }
                longest[k] = '\0';
            }

            j = 0;
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("Longest word = %s\n", longest);

    return 0;
}