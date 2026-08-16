#include <stdio.h>

void perfect()
{
    int n, i, sum = 0;

    scanf("%d", &n);

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum = sum + i;
    }

    if(sum == n)
        printf("Perfect");
    else
        printf("Not Perfect");
}

int main()
{
    perfect();

    return 0;
}


//#include <stdio.h>
//
//void perfect(int n)
//{
//    int i, sum = 0;
//
//    for(i = 1; i < n; i++)
//    {
//        if(n % i == 0)
//            sum = sum + i;
//    }
//
//    if(sum == n)
//        printf("Perfect");
//    else
//        printf("Not Perfect");
//}
//
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//
//    perfect(n);
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int perfect()
//{
//    int n, i, sum = 0;
//
//    scanf("%d", &n);
//
//    for(i = 1; i < n; i++)
//    {
//        if(n % i == 0)
//            sum = sum + i;
//    }
//
//    if(sum == n)
//        return 1;
//    else
//        return 0;
//}
//
//int main()
//{
//    if(perfect())
//        printf("Perfect");
//    else
//        printf("Not Perfect");
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int perfect(int n)
//{
//    int i, sum = 0;
//
//    for(i = 1; i < n; i++)
//    {
//        if(n % i == 0)
//            sum = sum + i;
//    }
//
//    if(sum == n)
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
//    if(perfect(n))
//        printf("Perfect");
//    else
//        printf("Not Perfect");
//
//    return 0;
//}
//
