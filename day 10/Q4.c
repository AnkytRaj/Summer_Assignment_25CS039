#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {

        // Print leading spaces
        for (j = 1; j <= 5 - i; j++) {
            printf(" ");
        }

        // Print increasing characters
        for (j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }

        // Print decreasing characters
        for (j = i - 1; j >= 1; j--) {
            printf("%c", 'A' + j - 1);
        }

        printf("\n");
    }

    return 0;
}