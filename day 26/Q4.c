#include <stdio.h>

int main() {
    int score = 0;
    int ans;

    printf("Quiz Application\n");

    printf("\nQ1: Capital of India?\n1.Delhi 2.Mumbai 3.Kolkata\n");
    scanf("%d", &ans);
    if (ans == 1) score++;

    printf("\nQ2: 2 + 2 = ?\n1.3 2.4 3.5\n");
    scanf("%d", &ans);
    if (ans == 2) score++;

    printf("\nQ3: C language creator?\n1.Dennis Ritchie 2.Bjarne Stroustrup 3.Guido\n");
    scanf("%d", &ans);
    if (ans == 1) score++;

    printf("\nFinal Score = %d/3\n", score);

    return 0;
}