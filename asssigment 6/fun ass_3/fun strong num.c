#include <stdio.h>

void strong()
{
    int n, temp, digit, i, fact, sum = 0;

    scanf("%d", &n);

    temp = n;

    while(n > 0)
    {
        digit = n % 10;
        fact = 1;

        for(i = 1; i <= digit; i++)
            fact = fact * i;

        sum = sum + fact;
        n = n / 10;
    }

    if(sum == temp)
        printf("Strong");
    else
        printf("Not Strong");
}

int main()
{
    strong();

    return 0;
}


//#include <stdio.h>
//
//void strong(int n)
//{
//    int temp, digit, i, fact, sum = 0;
//
//    temp = n;
//
//    while(n > 0)
//    {
//        digit = n % 10;
//        fact = 1;
//
//        for(i = 1; i <= digit; i++)
//            fact = fact * i;
//
//        sum = sum + fact;
//        n = n / 10;
//    }
//
//    if(sum == temp)
//        printf("Strong");
//    else
//        printf("Not Strong");
//}
//
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//
//    strong(n);
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int strong()
//{
//    int n, temp, digit, i, fact, sum = 0;
//
//    scanf("%d", &n);
//
//    temp = n;
//
//    while(n > 0)
//    {
//        digit = n % 10;
//        fact = 1;
//
//        for(i = 1; i <= digit; i++)
//            fact = fact * i;
//
//        sum = sum + fact;
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
//    if(strong())
//        printf("Strong");
//    else
//        printf("Not Strong");
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int strong(int n)
//{
//    int temp, digit, i, fact, sum = 0;
//
//    temp = n;
//
//    while(n > 0)
//    {
//        digit = n % 10;
//        fact = 1;
//
//        for(i = 1; i <= digit; i++)
//            fact = fact * i;
//
//        sum = sum + fact;
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
//    if(strong(n))
//        printf("Strong");
//    else
//        printf("Not Strong");
//
//    return 0;
//}