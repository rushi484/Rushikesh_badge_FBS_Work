#include <stdio.h>

void vowel()
{
    char ch;
    printf("Enter character: ");
    scanf(" %c", &ch);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("Vowel");
    else
        printf("Consonant");
}

int main()
{
    vowel();
    return 0;
}

//#include <stdio.h>
//
//void vowel(char ch)
//{
//    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
//       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
//        printf("Vowel");
//    else
//        printf("Consonant");
//}
//
//int main()
//{
//    char ch;
//    scanf(" %c", &ch);
//
//    vowel(ch);
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int vowel()
//{
//    char ch;
//    scanf(" %c", &ch);
//
//    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
//       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
//        return 1;
//
//    return 0;
//}
//
//int main()
//{
//    if(vowel())
//        printf("Vowel");
//    else
//        printf("Consonant");
//
//    return 0;
//}
//

//#include <stdio.h>
//
//int vowel(char ch)
//{
//    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
//       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
//        return 1;
//
//    return 0;
//}
//
//int main()
//{
//    char ch;
//    scanf(" %c", &ch);
//
//    if(vowel(ch))
//        printf("Vowel");
//    else
//        printf("Consonant");
//
//    return 0;
//}