#include <stdio.h>

void greatest()
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    if(a > b)
    {
        if(a > c)
            printf("Greatest = %d", a);
        else
            printf("Greatest = %d", c);
    }
    else
    {
        if(b > c)
            printf("Greatest = %d", b);
        else
            printf("Greatest = %d", c);
    }
}

int main()
{
    greatest();
    return 0;
}


//#include <stdio.h>
//
//void greatest(int a, int b, int c)
//{
//    if(a > b)
//    {
//        if(a > c)
//            printf("Greatest = %d", a);
//        else
//            printf("Greatest = %d", c);
//    }
//    else
//    {
//        if(b > c)
//            printf("Greatest = %d", b);
//        else
//            printf("Greatest = %d", c);
//    }
//}
//
//int main()
//{
//    int a, b, c;
//
//    scanf("%d%d%d", &a, &b, &c);
//
//    greatest(a, b, c);
//
//    return 0;
//}
//
//
//
//#include <stdio.h>
//
//int greatest()
//{
//    int a, b, c;
//
//    scanf("%d%d%d", &a, &b, &c);
//
//    if(a > b)
//    {
//        if(a > c)
//            return a;
//        else
//            return c;
//    }
//    else
//    {
//        if(b > c)
//            return b;
//        else
//            return c;
//    }
//}
//
//int main()
//{
//    int result;
//
//    result = greatest();
//
//    printf("Greatest = %d", result);
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int greatest(int a, int b, int c)
//{
//    if(a > b)
//    {
//        if(a > c)
//            return a;
//        else
//            return c;
//    }
//    else
//    {
//        if(b > c)
//            return b;
//        else
//            return c;
//    }
//}
//
//int main()
//{
//    int a, b, c, result;
//
//    scanf("%d%d%d", &a, &b, &c);
//
//    result = greatest(a, b, c);
//
//    printf("Greatest = %d", result);
//
//    return 0;
//}
