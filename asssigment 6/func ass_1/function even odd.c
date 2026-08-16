#include <stdio.h>

void evenOdd()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if(n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}

int main()
{
    evenOdd();
    return 0;
}


//#include <stdio.h>
//
//void evenOdd(int n)
//{
//    if(n % 2 == 0)
//        printf("Even");
//    else
//        printf("Odd");
//}
//
//int main()
//{
//    int n;
//    printf("Enter number: ");
//    scanf("%d", &n);
//
//    evenOdd(n);
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int evenOdd()
//{
//    int n;
//    printf("Enter number: ");
//    scanf("%d", &n);
//
//    return n % 2;
//}
//
//int main()
//{
//    int result = evenOdd();
//
//    if(result == 0)
//        printf("Even");
//    else
//        printf("Odd");
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int evenOdd(int n)
//{
//    return n % 2;
//}
//
//int main()
//{
//    int n;
//    printf("Enter number: ");
//    scanf("%d", &n);
//
//    if(evenOdd(n) == 0)
//        printf("Even");
//    else
//        printf("Odd");
//
//    return 0;
//}
