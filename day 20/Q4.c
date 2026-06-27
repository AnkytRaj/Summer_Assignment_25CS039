#include <stdio.h>

int main() {
    int a[3][3], sum;

    printf("Enter elements of 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Column-wise sums:\n");

    for (int j = 0; j < 3; j++) {
        sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += a[i][j];
        }
        printf("Sum of Column %d = %d\n", j + 1, sum);
    }

    return 0;
}