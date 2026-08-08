#include <stdio.h>

int main()
{
    int num, choice;
    int i, count = 0;
    int rev = 0, temp, rem;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n1. Even or Odd");
    printf("\n2. Prime or Not");
    printf("\n3. Palindrome or Not");
    printf("\n4. Positive, Negative or Zero");
    printf("\n5. Reverse Number");
    printf("\n6. Sum of Digits");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        if (num % 2 == 0)
            printf("Even");
        else
            printf("Odd");
        break;

    case 2:
        for (i = 1; i <= num; i++)
        {
            if (num % i == 0)
                count++;
        }

        if (count == 2)
            printf("Prime");
        else
            printf("Not Prime");
        break;

    case 3:
        temp = num;
        for (; temp != 0; temp = temp / 10)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
        }

        if (rev == num)
            printf("Palindrome");
        else
            printf("Not Palindrome");
        break;

    case 4:
        if (num > 0)
            printf("Positive");
        else if (num < 0)
            printf("Negative");
        else
            printf("Zero");
        break;

    case 5:
        temp = num;
        rev = 0;

        for (; temp != 0; temp = temp / 10)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
        }

        printf("Reverse = %d", rev);
        break;

    case 6:
        temp = num;
        sum = 0;

        for (; temp != 0; temp = temp / 10)
        {
            rem = temp % 10;
            sum = sum + rem;
        }

        printf("Sum of digits = %d", sum);
        break;

    default:
        printf("Invalid Choice");
    }

    return 0;
}