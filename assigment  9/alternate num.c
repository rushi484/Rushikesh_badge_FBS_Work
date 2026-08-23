#include <stdio.h>

void alternate(int arr[], int n)
{
    int i;

    for(i = 0; i < n; i = i + 2)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    printf("Alternate elements: ");

    alternate(arr, 5);

    return 0;
}