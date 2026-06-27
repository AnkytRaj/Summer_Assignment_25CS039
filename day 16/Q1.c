#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int n = 6;              // Numbers are from 1 to 6
    int size = 5;
    int sum = 0;

    int total = n * (n + 1) / 2;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    printf("Missing number = %d", total - sum);

    return 0;
}