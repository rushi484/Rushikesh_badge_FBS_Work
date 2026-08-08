//average of five numbers

#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30, d = 40, e = 50;

    int sum = a + b + c + d + e;
    float avg = sum / 5.0;

    printf("Average = %.2f", avg);

    return 0;
}