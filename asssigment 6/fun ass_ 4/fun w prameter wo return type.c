#include <stdio.h>

void armstrong(int n)
{
    int i, num, rem, sum;

    printf("Armstrong numbers: ");

    for(i = 1; i <= n; i++)
    {
        num = i;
        sum = 0;

        while(num > 0)
        {
            rem = num % 10;
            sum = sum + rem * rem * rem;
            num = num / 10;
        }

        if(sum == i)
            printf("%d ", i);
    }
}

void prime(int n)
{
    int i, j, count;

    printf("\nPrime numbers: ");

    for(i = 2; i <= n; i++)
    {
        count = 0;

        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
                count++;
        }

        if(count == 2)
            printf("%d ", i);
    }
}

void perfect(int n)
{
    int i, j, sum;

    printf("\nPerfect numbers: ");

    for(i = 1; i <= n; i++)
    {
        sum = 0;

        for(j = 1; j < i; j++)
        {
            if(i % j == 0)
                sum = sum + j;
        }

        if(sum == i)
            printf("%d ", i);
    }
}

void strong(int n)
{
    int i, num, rem, sum, j, fact;

    printf("\nStrong numbers: ");

    for(i = 1; i <= n; i++)
    {
        num = i;
        sum = 0;

        while(num > 0)
        {
            rem = num % 10;

            fact = 1;

            for(j = 1; j <= rem; j++)
                fact = fact * j;

            sum = sum + fact;
            num = num / 10;
        }

        if(sum == i)
            printf("%d ", i);
    }
}

void evenOdd(int n)
{
    if(n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}

void primeCheck(int n)
{
    int i, count = 0;

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
            count++;
    }

    if(count == 2)
        printf("Prime");
    else
        printf("Not Prime");
}

void palindrome(int n)
{
    int temp, rem, reverse = 0;

    temp = n;

    while(temp > 0)
    {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp = temp / 10;
    }

    if(reverse == n)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}

void positiveNegative(int n)
{
    if(n > 0)
        printf("Positive");
    else if(n < 0)
        printf("Negative");
    else
        printf("Zero");
}

void reverseNumber(int n)
{
    int rem, reverse = 0;

    while(n > 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }

    printf("Reverse = %d", reverse);
}

void sumDigits(int n)
{
    int rem, sum = 0;

    while(n > 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }

    printf("Sum of digits = %d", sum);
}

int main()
{
    int n, choice;

    printf("Enter range: ");
    scanf("%d", &n);

    armstrong(n);
    prime(n);
    perfect(n);
    strong(n);

    printf("\n\nEnter a number: ");
    scanf("%d", &n);

    printf("\n1. Even or Odd");
    printf("\n2. Prime or Not");
    printf("\n3. Palindrome or Not");
    printf("\n4. Positive, Negative or Zero");
    printf("\n5. Reverse a Number");
    printf("\n6. Sum of Digits");

    printf("\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            evenOdd(n);
            break;

        case 2:
            primeCheck(n);
            break;

        case 3:
            palindrome(n);
            break;

        case 4:
            positiveNegative(n);
            break;

        case 5:
            reverseNumber(n);
            break;

        case 6:
            sumDigits(n);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}