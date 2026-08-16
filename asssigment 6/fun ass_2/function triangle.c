#include <stdio.h>

void triangle()
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    if(a == b && b == c)
        printf("Equilateral");
    else if(a == b || b == c || a == c)
        printf("Isosceles");
    else
        printf("Scalene");
}

int main()
{
    triangle();
    return 0;
}



//#include <stdio.h>
//
//void triangle(int a, int b, int c)
//{
//    if(a == b && b == c)
//        printf("Equilateral");
//    else if(a == b || b == c || a == c)
//        printf("Isosceles");
//    else
//        printf("Scalene");
//}
//
//int main()
//{
//    int a, b, c;
//
//    scanf("%d%d%d", &a, &b, &c);
//
//    triangle(a, b, c);
//
//    return 0;
//}
//
//
//
//
//#include <stdio.h>
//
//int triangle()
//{
//    int a, b, c;
//
//    scanf("%d%d%d", &a, &b, &c);
//
//    if(a == b && b == c)
//        return 1;
//    else if(a == b || b == c || a == c)
//        return 2;
//    else
//        return 3;
//}
//
//int main()
//{
//    int result;
//
//    result = triangle();
//
//    if(result == 1)
//        printf("Equilateral");
//    else if(result == 2)
//        printf("Isosceles");
//    else
//        printf("Scalene");
//
//    return 0;
//}
//
//
//
//
//#include <stdio.h>
//
//int triangle(int a, int b, int c)
//{
//    if(a == b && b == c)
//        return 1;
//    else if(a == b || b == c || a == c)
//        return 2;
//    else
//        return 3;
//}
//
//int main()
//{
//    int a, b, c, result;
//
//    scanf("%d%d%d", &a, &b, &c);
//
//    result = triangle(a, b, c);
//
//    if(result == 1)
//        printf("Equilateral");
//    else if(result == 2)
//        printf("Isosceles");
//    else
//        printf("Scalene");
//
//    return 0;
//}