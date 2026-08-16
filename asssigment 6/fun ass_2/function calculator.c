#include <stdio.h>

void calculator()
{
    int a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    switch(op)
    {
        case '+':
            printf("Result = %d", a + b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            printf("Result = %d", a / b);
            break;

        case '%':
            printf("Result = %d", a % b);
            break;

        default:
            printf("Invalid operator");
    }
}

int main()
{
    calculator();

    return 0;
}



//#include <stdio.h>
//
//void calculator(int a, int b, char op)
//{
//    switch(op)
//    {
//        case '+':
//            printf("Result = %d", a + b);
//            break;
//
//        case '-':
//            printf("Result = %d", a - b);
//            break;
//
//        case '*':
//            printf("Result = %d", a * b);
//            break;
//
//        case '/':
//            printf("Result = %d", a / b);
//            break;
//
//        case '%':
//            printf("Result = %d", a % b);
//            break;
//
//        default:
//            printf("Invalid operator");
//    }
//}
//
//int main()
//{
//    int a, b;
//    char op;
//
//    printf("Enter two numbers: ");
//    scanf("%d%d", &a, &b);
//
//    printf("Enter operator (+, -, *, /, %%): ");
//    scanf(" %c", &op);
//
//    calculator(a, b, op);
//
//    return 0;
//}




//#include <stdio.h>
//
//int calculator()
//{
//    int a, b, result;
//    char op;
//
//    printf("Enter two numbers: ");
//    scanf("%d%d", &a, &b);
//
//    printf("Enter operator (+, -, *, /, %%): ");
//    scanf(" %c", &op);
//
//    switch(op)
//    {
//        case '+':
//            result = a + b;
//            break;
//
//        case '-':
//            result = a - b;
//            break;
//
//        case '*':
//            result = a * b;
//            break;
//
//        case '/':
//            result = a / b;
//            break;
//
//        case '%':
//            result = a % b;
//            break;
//
//        default:
//            return 0;
//    }
//
//    return result;
//}
//
//int main()
//{
//    int result;
//
//    result = calculator();
//
//    printf("Result = %d", result);
//
//    return 0;
//}





//#include <stdio.h>
//
//int calculator(int a, int b, char op)
//{
//    switch(op)
//    {
//        case '+':
//            return a + b;
//
//        case '-':
//            return a - b;
//
//        case '*':
//            return a * b;
//
//        case '/':
//            return a / b;
//
//        case '%':
//            return a % b;
//
//        default:
//            return 0;
//    }
//}
//
//int main()
//{
//    int a, b, result;
//    char op;
//
//    printf("Enter two numbers: ");
//    scanf("%d%d", &a, &b);
//
//    printf("Enter operator (+, -, *, /, %%): ");
//    scanf(" %c", &op);
//
//    result = calculator(a, b, op);
//
//    printf("Result = %d", result);
//
//    return 0;
//}

