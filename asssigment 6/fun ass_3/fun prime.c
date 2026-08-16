#include <stdio.h>

void prime()
{
    int n, i, count = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
            count++;
    }

    if(count == 2)
        printf("Prime");
    else
        printf("Not Prime");
}

int main()
{
    prime();

    return 0;
}


//#include <stdio.h>
//
//void prime(int n)
//{
//    int i, count = 0;
//
//    for(i = 1; i <= n; i++)
//    {
//        if(n % i == 0)
//            count++;
//    }
//
//    if(count == 2)
//        printf("Prime");
//    else
//        printf("Not Prime");
//}
//
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//
//    prime(n);
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int prime()
//{
//    int n, i, count = 0;
//
//    scanf("%d", &n);
//
//    for(i = 1; i <= n; i++)
//    {
//        if(n % i == 0)
//            count++;
//    }
//
//    if(count == 2)
//        return 1;
//    else
//        return 0;
//}
//
//int main()
//{
//    if(prime())
//        printf("Prime");
//    else
//        printf("Not Prime");
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int prime(int n)
//{
//    int i, count = 0;
//
//    for(i = 1; i <= n; i++)
//    {
//        if(n % i == 0)
//            count++;
//    }
//
//    if(count == 2)
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
//    if(prime(n))
//        printf("Prime");
//    else
//        printf("Not Prime");
//
//    return 0;
//}