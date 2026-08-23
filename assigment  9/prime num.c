#include <stdio.h>

int isPrime(int num)
{
    int i;

    if(num < 2)
    {
        return 0;
    }

    for(i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

void printPrime(int arr[], int n)
{
    int i;

    printf("Prime numbers: ");

    for(i = 0; i < n; i++)
    {
        if(isPrime(arr[i]))
        {
            printf("%d ", arr[i]);
        }
    }
}

int main()
{
    int arr[6] = {2, 4, 7, 9, 11, 15};

    printPrime(arr, 6);

    return 0;
}