#include <stdio.h>

void leapYear()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        printf("Leap Year");
    else
        printf("Not Leap Year");
}

int main()
{
    leapYear();
    return 0;
}

//#include <stdio.h>
//
//void leapYear(int year)
//{
//    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//        printf("Leap Year");
//    else
//        printf("Not Leap Year");
//}
//
//int main()
//{
//    int year;
//    scanf("%d", &year);
//
//    leapYear(year);
//    return 0;
//}
//
//#include <stdio.h>
//
//int leapYear()
//{
//    int year;
//    scanf("%d", &year);
//
//    return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
//}
//
//int main()
//{
//    if(leapYear())
//        printf("Leap Year");
//    else
//        printf("Not Leap Year");
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int leapYear(int year)
//{
//    return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
//}
//
//int main()
//{
//    int year;
//    scanf("%d", &year);
//
//    if(leapYear(year))
//        printf("Leap Year");
//    else
//        printf("Not Leap Year");
//
//    return 0;
//} 