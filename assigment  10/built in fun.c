#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () 
{
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];
    char str4[100] = "Hello World";
    char temp[100];
    char *ptr;

    /* 1. strlen() */
    printf("1. strlen = %lu\n", strlen(str1));

    /* 2. strcpy() */
    strcpy(str3, str1);
    printf("2. strcpy = %s\n", str3);

    /* 3. strncpy() */
    strncpy(temp, str2, 3);
    temp[3] = '\0';
    printf("3. strncpy = %s\n", temp);

    /* 4. strcat() */
    strcpy(temp, str1);
    strcat(temp, str2);
    printf("4. strcat = %s\n", temp);

    /* 5. strncat() */
    strcpy(temp, str1);
    strncat(temp, str2, 3);
    printf("5. strncat = %s\n", temp);

    /* 6. strcmp() */
    printf("6. strcmp = %d\n", strcmp(str1, str2));

    /* 7. strncmp() */
    printf("7. strncmp = %d\n", strncmp(str1, str2, 3));

    /* 8. strchr() */
    ptr = strchr(str4, 'o');
    printf("8. strchr = %s\n", ptr);

    /* 9. strrchr() */
    ptr = strrchr(str4, 'o');
    printf("9. strrchr = %s\n", ptr);

    /* 10. strstr() */
    ptr = strstr(str4, "World");
    printf("10. strstr = %s\n", ptr);

    /* 11. strtok() */
    strcpy(temp, "C Java Python");
    ptr = strtok(temp, " ");
    printf("11. strtok = ");
    while (ptr != NULL)
    {
        printf("%s ", ptr);
        ptr = strtok(NULL, " ");
    }
    printf("\n");

    /* 12. strspn() */
    printf("12. strspn = %lu\n", strspn("123ABC", "123"));

    /* 13. strcspn() */
    printf("13. strcspn = %lu\n", strcspn("Hello123", "123"));

    /* 14. strpbrk() */
    ptr = strpbrk("Hello", "aeiou");
    printf("14. strpbrk = %s\n", ptr);

    /* 15. memcpy() */
    memcpy(temp, "Hello", 6);
    printf("15. memcpy = %s\n", temp);

    /* 16. memmove() */
    memmove(temp, "World", 6);
    printf("16. memmove = %s\n", temp);

    /* 17. memset() */
    memset(temp, '*', 5);
    temp[5] = '\0';
    printf("17. memset = %s\n", temp);

    /* 18. memcmp() */
    printf("18. memcmp = %d\n", memcmp("ABC", "ABC", 3));

    /* 19. memchr() */
    ptr = memchr("Hello", 'l', 5);
    printf("19. memchr = %s\n", ptr);

    /* 20. strerror() */
    printf("20. strerror = %s\n", strerror(2));

    /* 21. strdup() */
    ptr = strdup(str1);
    printf("21. strdup = %s\n", ptr);
    free(ptr);

    return 0;
}