#include <stdio.h>

int main()
{
    int n = 12345;
    int last = n % 10;
    int first = n;

    while (first >= 10)
    {
        first = first / 10;
    }

    printf("Sum = %d", first + last);

    return 0;
}