//Minutes into Hours and Remaining Minutes

#include <stdio.h>

int main() {
    int minutes = 130;

    int hours = minutes / 60;
    int rem = minutes % 60;

    printf("Hours = %d\n", hours);
    printf("Remaining Minutes = %d", rem);

    return 0;
}