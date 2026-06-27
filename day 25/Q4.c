#include <stdio.h>
#include <string.h>

int main() {
    char words[5][50], temp[50];

    printf("Enter 5 words:\n");

    for (int i = 0; i < 5; i++)
        gets(words[i]);

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("Words sorted by length:\n");
    for (int i = 0; i < 5; i++)
        printf("%s\n", words[i]);

    return 0;
}