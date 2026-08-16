#include <stdio.h>

void discount()
{
    float price;
    char student;

    scanf("%f", &price);
    scanf(" %c", &student);

    if(student == 'y' || student == 'Y')
    {
        if(price > 500)
            printf("Discount = 20%%");
        else
            printf("Discount = 10%%");
    }
    else
    {
        if(price > 600)
            printf("Discount = 15%%");
        else
            printf("No Discount");
    }
}

int main()
{
    discount();
    return 0;
}


//#include <stdio.h>
//
//void discount(float price, char student)
//{
//    if(student == 'y' || student == 'Y')
//    {
//        if(price > 500)
//            printf("Discount = 20%%");
//        else
//            printf("Discount = 10%%");
//    }
//    else
//    {
//        if(price > 600)
//            printf("Discount = 15%%");
//        else
//            printf("No Discount");
//    }
//}
//
//int main()
//{
//    float price;
//    char student;
//
//    scanf("%f", &price);
//    scanf(" %c", &student);
//
//    discount(price, student);
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int discount()
//{
//    float price;
//    char student;
//
//    scanf("%f", &price);
//    scanf(" %c", &student);
//
//    if(student == 'y' || student == 'Y')
//    {
//        if(price > 500)
//            return 20;
//        else
//            return 10;
//    }
//    else
//    {
//        if(price > 600)
//            return 15;
//        else
//            return 0;
//    }
//}
//
//int main()
//{
//    int result;
//
//    result = discount();
//
//    if(result == 0)
//        printf("No Discount");
//    else
//        printf("Discount = %d%%", result);
//
//    return 0;
//}
//
//
//
//#include <stdio.h>
//
//int discount(float price, char student)
//{
//    if(student == 'y' || student == 'Y')
//    {
//        if(price > 500)
//            return 20;
//        else
//            return 10;
//    }
//    else
//    {
//        if(price > 600)
//            return 15;
//        else
//            return 0;
//    }
//}
//
//int main()
//{
//    float price;
//    char student;
//    int result;
//
//    scanf("%f", &price);
//    scanf(" %c", &student);
//
//    result = discount(price, student);
//
//    if(result == 0)
//        printf("No Discount");
//    else
//        printf("Discount = %d%%", result);
//
//    return 0;
//}