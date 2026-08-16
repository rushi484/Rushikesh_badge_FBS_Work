#include <stdio.h>

int main()
{
    int arr[5] = {10, 7, 15, 13, 20};

    for(int i = 0; i < 5; i++)
    {
        int count = 0;

        for(int j = 1; j <= arr[i]; j++)
        {
            if(arr[i] % j == 0)
                count++;
        }

        if(count == 2)
            printf("%d ", arr[i]);
    }

    return 0;
}