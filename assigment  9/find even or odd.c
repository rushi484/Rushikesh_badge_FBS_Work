#include <stdio.h>

void oddEven(int arr[], int n)
{
    int i;

    printf("Even numbers: ");

    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\nOdd numbers: ");

    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    oddEven(arr, 5);

    return 0;
}