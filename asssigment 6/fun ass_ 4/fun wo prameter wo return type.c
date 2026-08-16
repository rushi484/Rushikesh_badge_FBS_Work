#include <stdio.h>

void armstrong()
{
    int n, i, num, rem, sum;

    printf("Enter range: ");
    scanf("%d", &n);

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

void prime()
{
    int n, i, j, count;

    printf("\nEnter range: ");
    scanf("%d", &n);

    printf("Prime numbers: ");

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

void perfect()
{
    int n, i, j, sum;

    printf("\nEnter range: ");
    scanf("%d", &n);

    printf("Perfect numbers: ");

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

void strong()
{
    int n, i, num, rem, sum, j, fact;

    printf("\nEnter range: ");
    scanf("%d", &n);

    printf("Strong numbers: ");

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

void menu()
{
    int choice, n, temp, rem, reverse, sum, i, count;

    printf("\nEnter number: ");
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
            if(n % 2 == 0)
                printf("Even");
            else
                printf("Odd");
            break;

        case 2:
            count = 0;

            for(i = 1; i <= n; i++)
            {
                if(n % i == 0)
                    count++;
            }

            if(count == 2)
                printf("Prime");
            else
                printf("Not Prime");
            break;

        case 3:
            temp = n;
            reverse = 0;

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
            break;

        case 4:
            if(n > 0)
                printf("Positive");
            else if(n < 0)
                printf("Negative");
            else
                printf("Zero");
            break;

        case 5:
            temp = n;
            reverse = 0;

            while(temp > 0)
            {
                rem = temp % 10;
                reverse = reverse * 10 + rem;
                temp = temp / 10;
            }

            printf("Reverse = %d", reverse);
            break;

        case 6:
            temp = n;
            sum = 0;

            while(temp > 0)
            {
                rem = temp % 10;
                sum = sum + rem;
                temp = temp / 10;
            }

            printf("Sum of digits = %d", sum);
            break;

        default:
            printf("Invalid choice");
    }
}

int main()
{
    armstrong();
    prime();
    perfect();
    strong();
    menu();

    return 0;
}
