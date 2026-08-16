#include <stdio.h>

void salary()
{
    float basic, da, ta, hra, total;

    scanf("%f", &basic);

    if(basic <= 5000)
    {
        da = basic * 10 / 100;
        ta = basic * 20 / 100;
        hra = basic * 25 / 100;
    }
    else
    {
        da = basic * 15 / 100;
        ta = basic * 25 / 100;
        hra = basic * 30 / 100;
    }

    total = basic + da + ta + hra;

    printf("Total Salary = %.2f", total);
}

int main()
{
    salary();
    return 0;
}



//void salary(float basic)
//{
//    float da, ta, hra, total;
//
//    if(basic <= 5000)
//    {
//        da = basic * 10 / 100;
//        ta = basic * 20 / 100;
//        hra = basic * 25 / 100;
//    }
//    else
//    {
//        da = basic * 15 / 100;
//        ta = basic * 25 / 100;
//        hra = basic * 30 / 100;
//    }
//
//    total = basic + da + ta + hra;
//
//    printf("%.2f", total);
//}
//
//
//float salary()
//{
//    float basic, da, ta, hra;
//    scanf("%f", &basic);
//
//    if(basic <= 5000)
//    {
//        da=basic*10/100;
//        ta=basic*20/100;
//        hra=basic*25/100;
//    }
//    else
//    {
//        da=basic*15/100;
//        ta=basic*25/100;
//        hra=basic*30/100;
//    }
//
//    return basic+da+ta+hra;
//}
//
//
//float salary(float basic)
//{
//    float da, ta, hra;
//
//    if(basic <= 5000)
//    {
//        da=basic*10/100;
//        ta=basic*20/100;
//        hra=basic*25/100;
//    }
//    else
//    {
//        da=basic*15/100;
//        ta=basic*25/100;
//        hra=basic*30/100;
//    }
//
//    return basic+da+ta+hra;
//}