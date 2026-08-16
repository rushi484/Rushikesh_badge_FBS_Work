#include <stdio.h>

void divisible()
{
    int n;

    scanf("%d", &n);

    if(n % 3 == 0 && n % 5 == 0)
        printf("Divisible by both");
    else if(n % 3 == 0)
        printf("Divisible by 3 but not by 5");
    else if(n % 5 == 0)
        printf("Divisible by 5 but not by 3");
    else
        printf("Divisible by None");
}

int main()
{
    divisible();
    return 0;
}


//#include <stdio.h>
//
//void divisible(int n)
//{
//    if(n % 3 == 0 && n % 5 == 0)
//        printf("Divisible by both");
//    else if(n % 3 == 0)
//        printf("Divisible by 3 but not by 5");
//    else if(n % 5 == 0)
//        printf("Divisible by 5 but not by 3");
//    else
//        printf("Divisible by None");
//}
//
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//
//    divisible(n);
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int divisible()
//{
//    int n;
//
//    scanf("%d", &n);
//
//    if(n % 3 == 0 && n % 5 == 0)
//        return 1;
//    else if(n % 3 == 0)
//        return 2;
//    else if(n % 5 == 0)
//        return 3;
//    else
//        return 4;
//}
//
//int main()
//{
//    int result;
//
//    result = divisible();
//
//    if(result == 1)
//        printf("Divisible by both");
//    else if(result == 2)
//        printf("Divisible by 3 but not by 5");
//    else if(result == 3)
//        printf("Divisible by 5 but not by 3");
//    else
//        printf("Divisible by None");
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int divisible(int n)
//{
//    if(n % 3 == 0 && n % 5 == 0)
//        return 1;
//    else if(n % 3 == 0)
//        return 2;
//    else if(n % 5 == 0)
//        return 3;
//    else
//        return 4;
//}
//
//int main()
//{
//    int n, result;
//
//    scanf("%d", &n);
//
//    result = divisible(n);
//
//    if(result == 1)
//        printf("Divisible by both");
//    else if(result == 2)
//        printf("Divisible by 3 but not by 5");
//    else if(result == 3)
//        printf("Divisible by 5 but not by 3");
//    else
//        printf("Divisible by None");
//
//    return 0;
//}