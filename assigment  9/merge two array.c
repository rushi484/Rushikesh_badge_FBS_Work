#include <stdio.h>

void merge(int arr[], int brr[], int crr[], int n, int m)
{
    int i;

    // Copy first array
    for(i = 0; i < n; i++)
    {
        crr[i] = arr[i];
    }

    // Copy second array
    for(i = 0; i < m; i++)
    {
        crr[n + i] = brr[i];
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
    int arr[3] = {1, 2, 3};
    int brr[3] = {4, 5, 6};
    int crr[6];

    merge(arr, brr, crr, 3, 3);

    printf("Merged array: ");
    display(crr, 6);

    return 0;
}