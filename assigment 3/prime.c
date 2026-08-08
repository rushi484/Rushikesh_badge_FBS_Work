#include <stdio.h>

int main()
{
    int n = 7;
    int i = 2;
    int count = 0;

    while (i < n)
    {
        if (n % i == 0)
        {
            count++;
        }
        i++;
    }

    if (count == 0 && n > 1)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}