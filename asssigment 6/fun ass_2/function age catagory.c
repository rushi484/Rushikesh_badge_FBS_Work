#include <stdio.h>

void ageCategory()
{
    int age;

    scanf("%d", &age);

    if(age < 12)
        printf("Child");
    else if(age <= 19)
        printf("Teenager");
    else if(age <= 59)
        printf("Adult");
    else
        printf("Senior");
}

int main()
{
    ageCategory();
    return 0;
}



//#include <stdio.h>
//
//void ageCategory(int age)
//{
//    if(age < 12)
//        printf("Child");
//    else if(age <= 19)
//        printf("Teenager");
//    else if(age <= 59)
//        printf("Adult");
//    else
//        printf("Senior");
//}
//
//int main()
//{
//    int age;
//
//    scanf("%d", &age);
//
//    ageCategory(age);
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int ageCategory()
//{
//    int age;
//
//    scanf("%d", &age);
//
//    if(age < 12)
//        return 1;
//    else if(age <= 19)
//        return 2;
//    else if(age <= 59)
//        return 3;
//    else
//        return 4;
//}
//
//int main()
//{
//    int result;
//
//    result = ageCategory();
//
//    if(result == 1)
//        printf("Child");
//    else if(result == 2)
//        printf("Teenager");
//    else if(result == 3)
//        printf("Adult");
//    else
//        printf("Senior");
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int ageCategory(int age)
//{
//    if(age < 12)
//        return 1;
//    else if(age <= 19)
//        return 2;
//    else if(age <= 59)
//        return 3;
//    else
//        return 4;
//}
//
//int main()
//{
//    int age, result;
//
//    scanf("%d", &age);
//
//    result = ageCategory(age);
//
//    if(result == 1)
//        printf("Child");
//    else if(result == 2)
//        printf("Teenager");
//    else if(result == 3)
//        printf("Adult");
//    else
//        printf("Senior");
//
//    return 0;
//}
