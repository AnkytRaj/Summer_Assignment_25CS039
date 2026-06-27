#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len = 0, isPalindrome = 1;

    printf("Enter a string: ");
    gets(str);   // or use fgets in modern C

    // find length manually
    while (str[len] != '\0') {
        len++;
    }

    // check palindrome
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("String is Palindrome\n");
    else
        printf("String is Not Palindrome\n");

    return 0;
}