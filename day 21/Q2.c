#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, len = 0;

    printf("Enter a string: ");
    gets(str);   // you can use fgets instead in modern C

    // find length
    while (str[len] != '\0') {
        len++;
    }

    // reverse the string
    for (i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }

    rev[len] = '\0';

    printf("Reversed string: %s\n", rev);

    return 0;
}