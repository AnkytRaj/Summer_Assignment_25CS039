 #include <stdio.h>

int main() {
    int n, i, largest = 0, j, prime;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(n % i == 0) {
            prime = 1;

            if(i < 2)
                prime = 0;
            else {
                for(j = 2; j <= i / 2; j++) {
                    if(i % j == 0) {
                        prime = 0;
                        break;
                    }
                }
            }

            if(prime)
                largest = i;
        }
    }

    printf("Largest Prime Factor = %d", largest);

    return 0;
}