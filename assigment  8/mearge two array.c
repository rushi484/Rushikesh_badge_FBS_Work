#include <stdio.h>

int main()
{
    int arr[3] = {1, 2, 3};
    int brr[3] = {4, 5, 6};
    int crr[6];

    for(int i = 0; i < 3; i++)
    {
        crr[i] = arr[i];
    }

    for(int i = 0; i < 3; i++)
    {
        crr[i + 3] = brr[i];
    }

    printf("Merged array: ");

    for(int i = 0; i < 6; i++)
    {
        printf("%d ", crr[i]);
    }

    return 0;
}