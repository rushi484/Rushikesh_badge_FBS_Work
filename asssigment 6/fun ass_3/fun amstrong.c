#include <stdio.h>

void armstrong()
{
    int n, temp, digit, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;

    while(n > 0)
    {
        digit = n % 10;
        sum = sum + digit * digit * digit;
        n = n / 10;
    }

    if(sum == temp)
        printf("Armstrong");
    else
        printf("Not Armstrong");
}

int main()
{
    armstrong();

    return 0;
}


//#include <stdio.h>
//
//void armstrong(int n)
//{
//    int temp, digit, sum = 0;
//
//    temp = n;
//
//    while(n > 0)
//    {
//        digit = n % 10;
//        sum = sum + digit * digit * digit;
//        n = n / 10;
//    }
//
//    if(sum == temp)
//        printf("Armstrong");
//    else
//        printf("Not Armstrong");
//}
//
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//
//    armstrong(n);
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int armstrong()
//{
//    int n, temp, digit, sum = 0;
//
//    scanf("%d", &n);
//
//    temp = n;
//
//    while(n > 0)
//    {
//        digit = n % 10;
//        sum = sum + digit * digit * digit;
//        n = n / 10;
//    }
//
//    if(sum == temp)
//        return 1;
//    else
//        return 0;
//}
//
//int main()
//{
//    if(armstrong())
//        printf("Armstrong");
//    else
//        printf("Not Armstrong");
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int armstrong(int n)
//{
//    int temp, digit, sum = 0;
//
//    temp = n;
//
//    while(n > 0)
//    {
//        digit = n % 10;
//        sum = sum + digit * digit * digit;
//        n = n / 10;
//    }
//
//    if(sum == temp)
//        return 1;
//    else
//        return 0;
//}
//
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//
//    if(armstrong(n))
//        printf("Armstrong");
//    else
//        printf("Not Armstrong");
//
//    return 0;
//}