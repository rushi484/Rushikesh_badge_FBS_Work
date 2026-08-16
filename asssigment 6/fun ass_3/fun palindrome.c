#include <stdio.h>

void palindrome()
{
    int n, temp, digit, reverse = 0;

    scanf("%d", &n);

    temp = n;

    while(n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if(reverse == temp)
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
//    int temp, digit, reverse = 0;
//
//    temp = n;
//
//    while(n > 0)
//    {
//        digit = n % 10;
//        reverse = reverse * 10 + digit;
//        n = n / 10;
//    }
//
//    if(reverse == temp)
//        printf("Palindrome");
//    else
//        printf("Not Palindrome");
//}
//
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//
//    palindrome(n);
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int palindrome()
//{
//    int n, temp, digit, reverse = 0;
//
//    scanf("%d", &n);
//
//    temp = n;
//
//    while(n > 0)
//    {
//        digit = n % 10;
//        reverse = reverse * 10 + digit;
//        n = n / 10;
//    }
//
//    if(reverse == temp)
//        return 1;
//    else
//        return 0;
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
//    int temp, digit, reverse = 0;
//
//    temp = n;
//
//    while(n > 0)
//    {
//        digit = n % 10;
//        reverse = reverse * 10 + digit;
//        n = n / 10;
//    }
//
//    if(reverse == temp)
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
//    if(palindrome(n))
//        printf("Palindrome");
//    else
//        printf("Not Palindrome");
//
//    return 0;
//}