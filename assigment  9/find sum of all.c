#include <stdio.h>

int sumArray(int arr[], int n)
{
    int i;
    int sum = 0;

    for(i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    printf("Sum = %d", sumArray(arr, 5));

    return 0;
}

