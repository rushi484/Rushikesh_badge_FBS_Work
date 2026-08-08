#include <stdio.h>

int main()
{
    int n = 153;
    int temp = n;
    int sum = 0;
    int rem;

    while (temp > 0)
    {
        rem = temp % 10;
        sum = sum + rem * rem * rem;
        temp = temp / 10;
    }

    if (sum == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}