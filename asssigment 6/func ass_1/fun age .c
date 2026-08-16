#include <stdio.h>

void vote()
{
    int age;
    scanf("%d", &age);

    if(age >= 18)
        printf("Eligible");
    else
        printf("Not Eligible");
}

int main()
{
    vote();
    return 0;
}


//void vote(int age)
//{
//    if(age >= 18)
//        printf("Eligible");
//    else
//        printf("Not Eligible");
//}
//
//
//int vote()
//{
//    int age;
//    scanf("%d", &age);
//    return age >= 18;
//}
//
//
//int vote(int age)
//{
//    return age >= 18;
//}