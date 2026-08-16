#include <stdio.h>

void marks()
{
    int m;

    scanf("%d", &m);

    if(m > 75)
        printf("Distinction");
    else if(m > 65)
        printf("First Class");
    else if(m > 55)
        printf("Second Class");
    else if(m >= 40)
        printf("Pass Class");
    else
        printf("Fail");
}

int main()
{
    marks();
    return 0;
}



//#include <stdio.h>
//
//void marks(int m)
//{
//    if(m > 75)
//        printf("Distinction");
//    else if(m > 65)
//        printf("First Class");
//    else if(m > 55)
//        printf("Second Class");
//    else if(m >= 40)
//        printf("Pass Class");
//    else
//        printf("Fail");
//}
//
//int main()
//{
//    int m;
//
//    scanf("%d", &m);
//
//    marks(m);
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int marks()
//{
//    int m;
//
//    scanf("%d", &m);
//
//    if(m > 75)
//        return 1;
//    else if(m > 65)
//        return 2;
//    else if(m > 55)
//        return 3;
//    else if(m >= 40)
//        return 4;
//    else
//        return 5;
//}
//
//int main()
//{
//    int result;
//
//    result = marks();
//
//    if(result == 1)
//        printf("Distinction");
//    else if(result == 2)
//        printf("First Class");
//    else if(result == 3)
//        printf("Second Class");
//    else if(result == 4)
//        printf("Pass Class");
//    else
//        printf("Fail");
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int marks(int m)
//{
//    if(m > 75)
//        return 1;
//    else if(m > 65)
//        return 2;
//    else if(m > 55)
//        return 3;
//    else if(m >= 40)
//        return 4;
//    else
//        return 5;
//}
//
//int main()
//{
//    int m, result;
//
//    scanf("%d", &m);
//
//    result = marks(m);
//
//    if(result == 1)
//        printf("Distinction");
//    else if(result == 2)
//        printf("First Class");
//    else if(result == 3)
//        printf("Second Class");
//    else if(result == 4)
//        printf("Pass Class");
//    else
//        printf("Fail");
//
//    return 0;
//}
