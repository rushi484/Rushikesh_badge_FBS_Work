#include <stdio.h>

int main()
{
    int n, i;
    long long term = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        term = term * 10 + 1;
        printf("%lld", term);

        if(i < n)
        {
            printf(" + ");
        }
    }

    return 0;
}