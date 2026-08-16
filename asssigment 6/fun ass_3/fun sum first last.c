#include <stdio.h>

void firstLastSum()
{
    int n, first, last, sum;

    scanf("%d", &n);

    last = n % 10;

    while(n >= 10)
        n = n / 10;

    first = n;

    sum = first + last;

    printf("Sum = %d", sum);
}

int main()
{
    firstLastSum();

    return 0;
}


//#include <stdio.h>
//
//void firstLastSum(int n)
//{
//    int first, last, sum;
//
//    last = n % 10;
//
//    while(n >= 10)
//        n = n / 10;
//
//    first = n;
//
//    sum = first + last;
//
//    printf("Sum = %d", sum);
//}
//
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//
//    firstLastSum(n);
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int firstLastSum()
//{
//    int n, first, last;
//
//    scanf("%d", &n);
//
//    last = n % 10;
//
//    while(n >= 10)
//        n = n / 10;
//
//    first = n;
//
//    return first + last;
//}
//
//int main()
//{
//    int result;
//
//    result = firstLastSum();
//
//    printf("Sum = %d", result);
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int firstLastSum(int n)
//{
//    int first, last;
//
//    last = n % 10;
//
//    while(n >= 10)
//        n = n / 10;
//
//    first = n;
//
//    return first + last;
//}
//
//int main()
//{
//    int n, result;
//
//    scanf("%d", &n);
//
//    result = firstLastSum(n);
//
//    printf("Sum = %d", result);
//
//    return 0;
//}