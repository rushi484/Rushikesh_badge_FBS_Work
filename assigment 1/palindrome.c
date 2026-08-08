#include <stdio.h>

int main()
{
    int num, original;
    int first, middle, last;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    original = num;

    first = num / 100;
    middle = (num / 10) % 10;
    last = num % 10;

    if (first == last)
    {
        printf("%d is Palindrome", original);
    }
    else
    {
        printf("%d is Not Palindrome", original);
    }

    return 0;
}