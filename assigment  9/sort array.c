#include <stdio.h>

void sort(int arr[], int n)
{
    int i, j;
    int temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
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
    int arr[5] = {5, 2, 4, 1, 3};

    sort(arr, 5);

    printf("Sorted array: ");
    display(arr, 5);

    return 0;
}