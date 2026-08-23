#include <stdio.h>

void mystrcpy(char dest[], char src[])
{
    int i = 0;

    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
}

int main()
{
    char src[] = "Hello";
    char dest[20];

    mystrcpy(dest, src);

    printf("%s", dest);

    return 0;
}


//mystrlen()

//
//#include <stdio.h>
//
//int mystrlen(char str[])
//{
//    int i = 0;
//
//    while(str[i] != '\0')
//    {
//        i++;
//    }
//
//    return i;
//}
//
//int main()
//{
//    char str[] = "Hello";
//
//    printf("Length = %d", mystrlen(str));
//
//    return 0;
//}



//mystrcmp()
//
//#include <stdio.h>
//
//int mystrcmp(char str1[], char str2[])
//{
//    int i = 0;
//
//    while(str1[i] != '\0' || str2[i] != '\0')
//    {
//        if(str1[i] != str2[i])
//        {
//            return str1[i] - str2[i];
//        }
//
//        i++;
//    }
//
//    return 0;
//}
//
//int main()
//{
//    char str1[] = "Hello";
//    char str2[] = "Hello";
//
//    printf("%d", mystrcmp(str1, str2));
//
//    return 0;
//}



//mystrcat()

//#include <stdio.h>
//
//void mystrcat(char dest[], char src[])
//{
//    int i = 0;
//    int j = 0;
//
//    while(dest[i] != '\0')
//    {
//        i++;
//    }
//
//    while(src[j] != '\0')
//    {
//        dest[i] = src[j];
//        i++;
//        j++;
//    }
//
//    dest[i] = '\0';
//}
//
//int main()
//{
//    char str1[30] = "Hello ";
//    char str2[] = "World";
//
//    mystrcat(str1, str2);
//
//    printf("%s", str1);
//
//    return 0;
//}


//#include <stdio.h>
//
//void mystrncpy(char dest[], char src[], int n)
//{
//    int i;
//
//    for(i = 0; i < n && src[i] != '\0'; i++)
//    {
//        dest[i] = src[i];
//    }
//
//    dest[i] = '\0';
//}
//
//int main()
//{
//    char src[] = "HelloWorld";
//    char dest[20];
//
//    mystrncpy(dest, src, 5);
//
//    printf("%s", dest);
//
//    return 0;
//}


//#include <stdio.h>
//
//void mystrupper(char str[])
//{
//    int i = 0;
//
//    while(str[i] != '\0')
//    {
//        if(str[i] >= 'a' && str[i] <= 'z')
//        {
//            str[i] = str[i] - 32;
//        }
//
//        i++;
//    }
//}
//
//int main()
//{
//    char str[] = "hello world";
//
//    mystrupper(str);
//
//    printf("%s", str);
//
//    return 0;
//}


//#include <stdio.h>

//void mystrlower(char str[])
//{
//    int i = 0;
//
//    while(str[i] != '\0')
//    {
//        if(str[i] >= 'A' && str[i] <= 'Z')
//        {
//            str[i] = str[i] + 32;
//        }
//
//        i++;
//    }
//}
//
//int main()
//{
//    char str[] = "HELLO WORLD";
//
//    mystrlower(str);
//
//    printf("%s", str);
//
//    return 0;
//}

//#include <stdio.h>
//
//void mystrrev(char str[])
//{
//    int i = 0;
//    int j = 0;
//    char temp;
//
//    while(str[j] != '\0')
//    {
//        j++;
//    }
//
//    j--;
//
//    while(i < j)
//    {
//        temp = str[i];
//        str[i] = str[j];
//        str[j] = temp;
//
//        i++;
//        j--;
//    }
//}
//
//int main()
//{
//    char str[] = "Hello";
//
//    mystrrev(str);
//
//    printf("%s", str);
//
//    return 0;
//}


//#include <stdio.h>
//
//char* mystrstr(char str[], char sub[])
//{
//    int i, j;
//
//    for(i = 0; str[i] != '\0'; i++)
//    {
//        j = 0;
//
//        while(sub[j] != '\0' && str[i + j] == sub[j])
//        {
//            j++;
//        }
//
//        if(sub[j] == '\0')
//        {
//            return &str[i];
//        }
//    }
//
//    return NULL;
//}
//
//int main()
//{
//    char str[] = "Hello World";
//    char sub[] = "World";
//
//    printf("%s", mystrstr(str, sub));
//
//    return 0;
//}


//#include <stdio.h>
//
//char lower(char ch)
//{
//    if(ch >= 'A' && ch <= 'Z')
//        ch = ch + 32;
//
//    return ch;
//}
//
//int mystrcasecmp(char str1[], char str2[])
//{
//    int i = 0;
//
//    while(str1[i] != '\0' || str2[i] != '\0')
//    {
//        if(lower(str1[i]) != lower(str2[i]))
//        {
//            return lower(str1[i]) - lower(str2[i]);
//        }
//
//        i++;
//    }
//
//    return 0;
//}
//
//int main()
//{
//    char str1[] = "HELLO";
//    char str2[] = "hello";
//
//    printf("%d", mystrcasecmp(str1, str2));
//
//    return 0;
//}


//#include <stdio.h>
//
//char* mystrchr(char str[], char ch)
//{
//    int i = 0;
//    
//    while(str[i] != '\0')
//    {
//        if(str[i] == ch)
//        {
//            return &str[i];
//        }
//
//        i++;
//    }
//
//    return NULL;
//}
//
//   int main()
// {
//    char str[] = "Hello World";
//
//    printf("%s", mystrchr(str, 'o'));
//
//    return 0;
//}

//#include <stdio.h>
//
//char* mystrrchr(char str[], char ch)
//{
//    int i = 0;
//    char *last = NULL;
//
//    while(str[i] != '\0')
//    {
//        if(str[i] == ch)
//        {
//            last = &str[i];
//        }
//
//        i++;
//    }
//
//    return last;
//}
//
//int main()
//{
//    char str[] = "Hello World";
//
//    printf("%s", mystrrchr(str, 'o'));
//
//    return 0;
//}


//#include <stdio.h>
//
//int mystrncmp(char str1[], char str2[], int n)
//{
//    int i;
//
//    for(i = 0; i < n; i++)
//    {
//        if(str1[i] != str2[i])
//        {
//            return str1[i] - str2[i];
//        }
//
//        if(str1[i] == '\0' || str2[i] == '\0')
//        {
//            break;
//        }
//    }
//
//    return 0;
//}
//
//int main()
//{
//    char str1[] = "Hello";
//    char str2[] = "Help";
//
//    printf("%d", mystrncmp(str1, str2, 3));
//
//    return 0;
//}


//#include <stdio.h>
//
//char* mystrnstr(char str[], char sub[], int n)
//{
//    int i, j;
//
//    for(i = 0; i < n && str[i] != '\0'; i++)
//    {
//        j = 0;
//
//        while(sub[j] != '\0' &&
//              i + j < n &&
//              str[i + j] == sub[j])
//        {
//            j++;
//        }
//
//        if(sub[j] == '\0')
//        {
//            return &str[i];
//        }
//    }
//
//    return NULL;
//}
//
//int main()
//{
//    char str[] = "Hello World";
//    char sub[] = "World";
//
//    printf("%s", mystrnstr(str, sub, 11));
//
//    return 0;
//} 


//#include <stdio.h>
//
//void mystrncat(char dest[], char src[], int n)
//{
//    int i = 0;
//    int j = 0;
//
//    while(dest[i] != '\0')
//    {
//        i++;
//    }
//
//    while(src[j] != '\0' && j < n)
//    {
//        dest[i] = src[j];
//
//        i++;
//        j++;
//    }
//
//    dest[i] = '\0';
//}
//
//int main()
//{
//    char str1[30] = "Hello ";
//    char str2[] = "World";
//
//    mystrncat(str1, str2, 3);
//
//    printf("%s", str1);
//
//    return 0;
//} 



//#include <stdio.h>
//
//char lower(char ch)
//{
//    if(ch >= 'A' && ch <= 'Z')
//        ch = ch + 32;
//
//    return ch;
//}
//
//int mystrncasecmp(char str1[], char str2[], int n)
//{
//    int i;
//
//    for(i = 0; i < n; i++)
//    {
//        if(lower(str1[i]) != lower(str2[i]))
//        {
//            return lower(str1[i]) - lower(str2[i]);
//        }
//
//        if(str1[i] == '\0' || str2[i] == '\0')
//        {
//            break;
//        }
//    }
//
//    return 0;
//}
//
//int main()
//{
//    char str1[] = "HELLO";
//    char str2[] = "hello";
//
//    printf("%d", mystrncasecmp(str1, str2, 3));
//
//    return 0;
//}
