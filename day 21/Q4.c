#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    gets(str);   // you can use fgets in modern C

    while (str[i] != '\0') {

        // check lowercase letters
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;   // ASCII conversion
        }

        i++;
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}