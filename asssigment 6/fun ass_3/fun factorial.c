#include <stdio.h>

void factorial()
{
    int n, i, fact = 1;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
        fact = fact * i;

    printf("Factorial = %d", fact);
}

int main()
{
    factorial();

    return 0;
}


//#include <stdio.h>
//
//void factorial(int n)
//{
//    int i, fact = 1;
//
//    for(i = 1; i <= n; i++)
//        fact = fact * i;
//
//    printf("Factorial = %d", fact);
//}
//
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//
//    factorial(n);
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int factorial()
//{
//    int n, i, fact = 1;
//
//    scanf("%d", &n);
//
//    for(i = 1; i <= n; i++)
//        fact = fact * i;
//
//    return fact;
//}
//
//int main()
//{
//    int result;
//
//    result = factorial();
//
//    printf("Factorial = %d", result);
//
//    return 0;
//}
//
//
//
//#include <stdio.h>
//
//int factorial(int n)
//{
//    int i, fact = 1;
//
//    for(i = 1; i <= n; i++)
//        fact = fact * i;
//
//    return fact;
//}
//
//int main()
//{
//    int n, result;
//
//    scanf("%d", &n);
//
//    result = factorial(n);
//
//    printf("Factorial = %d", result);
//
//    return 0;
//}