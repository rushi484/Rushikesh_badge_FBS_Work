#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n, found = 0;

    printf("Enter number to search: ");
    scanf("%d", &n);

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] == n)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Number found");
    else
        printf("Number not found");

    return 0;
}