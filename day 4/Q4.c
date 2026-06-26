#include <stdio.h>
#include <math.h>

int main()
{
    int start, end, num, temp, digit, count;
    int sum;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    for(num = start; num <= end; num++)
    {
        temp = num;
        count = 0;
        sum = 0;

        while(temp != 0)
        {
            count++;
            temp /= 10;
        }

        temp = num;

        while(temp != 0)
        {
            digit = temp % 10;
            sum += pow(digit, count);
            temp /= 10;
        }

        if(sum == num)
            printf("%d ", num);
    }

    return 0;
}