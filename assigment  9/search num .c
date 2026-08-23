#include <stdio.h>

void search(int arr[], int n, int num)
{
    int i;
    int found = 0;

    for(i = 0; i < n; i++)
    {
        if(arr[i] == num)
        {
            printf("Number found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Number not found\n");
    }
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int num;

    printf("Enter number to search: ");
    scanf("%d", &num);

    search(arr, 5, num);

    return 0;
}