#include <stdio.h>

int main()
{
    int n, i, temp, rem, sum, digits, j;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        temp = i;
        digits = 0;

        for (; temp != 0; temp = temp / 10)
            digits++;

        temp = i;
        sum = 0;

        for (; temp != 0; temp = temp / 10)
        {
            rem = temp % 10;
            int power = 1;

            for (j = 1; j <= digits; j++)
                power = power * rem;

            sum = sum + power;
        }

        if (sum == i)
            printf("%d ", i);
    }

    return 0;
}