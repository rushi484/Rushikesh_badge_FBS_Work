#include <stdio.h>

void palindrome()
{
    int n, rev, r, temp;

    printf("Enter 3 digit number: ");
    scanf("%d", &n);

    temp = n;
    rev = 0;

    while(n > 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }

    if(temp == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}

int main()
{
    palindrome();
    return 0;
}


//#include <stdio.h>
//
//void palindrome(int n)
//{
//    int rev = 0, r, temp = n;
//
//    while(n > 0)
//    {
//        r = n % 10;
//        rev = rev * 10 + r;
//        n = n / 10;
//    }
//
//    if(temp == rev)
//        printf("Palindrome");
//    else
//        printf("Not Palindrome");
//}
//
//int main()
//{
//    int n;
//    printf("Enter number: ");
//    scanf("%d", &n);
//
//    palindrome(n);
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int palindrome()
//{
//    int n, rev = 0, r, temp;
//
//    printf("Enter number: ");
//    scanf("%d", &n);
//
//    temp = n;
//
//    while(n > 0)
//    {
//        r = n % 10;
//        rev = rev * 10 + r;
//        n = n / 10;
//    }
//
//    return temp == rev;
//}
//
//int main()
//{
//    if(palindrome())
//        printf("Palindrome");
//    else
//        printf("Not Palindrome");
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int palindrome(int n)
//{
//    int rev = 0, r, temp = n;
//
//    while(n > 0)
//    {
//        r = n % 10;
//        rev = rev * 10 + r;
//        n = n / 10;
//    }
//
//    return temp == rev;
//}
//
//int main()
//{
//    int n;
//    printf("Enter number: ");
//    scanf("%d", &n);
//
//    if(palindrome(n))
//        printf("Palindrome");
//    else
//        printf("Not Palindrome");
//
//    return 0;
//}



