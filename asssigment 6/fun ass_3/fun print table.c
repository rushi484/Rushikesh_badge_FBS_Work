#include <stdio.h>

void table()
{
    int n, i;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++)
        printf("%d ", n * i);
}

int main()
{
    table();

    return 0;
}


//#include <stdio.h>
//
//void table(int n)
//{
//    int i;
//
//    for(i = 1; i <= 10; i++)
//        printf("%d ", n * i);
//}
//
//int main()
//{
//    int n;
//
//    printf("Enter number: ");
//    scanf("%d", &n);
//
//    table(n);
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int table()
//{
//    int n, i;
//
//    scanf("%d", &n);
//
//    for(i = 1; i <= 10; i++)
//        printf("%d ", n * i);
//
//    return 0;
//}
//
//int main()
//{
//    table();
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int table(int n)
//{
//    int i;
//
//    for(i = 1; i <= 10; i++)
//        printf("%d ", n * i);
//
//    return 0;
//}
//
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//
//    table(n);
//
//    return 0;
//}