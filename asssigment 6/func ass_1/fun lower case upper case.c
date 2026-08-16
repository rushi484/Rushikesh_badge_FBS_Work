#include <stdio.h>

void checkCase()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if(ch >= 'A' && ch <= 'Z')
        printf("Uppercase");
    else if(ch >= 'a' && ch <= 'z')
        printf("Lowercase");
    else
        printf("Invalid");
}

int main()
{
    checkCase();

    return 0;
}



//void checkCase(char ch)
//{
//    if(ch >= 'A' && ch <= 'Z')
//        printf("Uppercase");
//    else if(ch >= 'a' && ch <= 'z')
//        printf("Lowercase");
//    else
//        printf("Invalid");
//}
//
//
//
//int checkCase()
//{
//    char ch;
//    scanf(" %c", &ch);
//
//    if(ch >= 'A' && ch <= 'Z')
//        return 1;
//    if(ch >= 'a' && ch <= 'z')
//        return 2;
//
//    return 0;
//}
//
//
//int checkCase(char ch)
//{
//    if(ch >= 'A' && ch <= 'Z')
//        return 1;
//    if(ch >= 'a' && ch <= 'z')
//        return 2;
//
//    return 0;
//}