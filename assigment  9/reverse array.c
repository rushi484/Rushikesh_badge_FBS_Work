#include <stdio.h>

void reverse(int arr[], int n)
{
    int i;
    int temp;

    for(i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

void display(int arr[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    reverse(arr, 5);

    printf("Reversed array: ");
    display(arr, 5);

    return 0;
}