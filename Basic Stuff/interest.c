#include <stdio.h>

int main() {
    float principle, interest, money;
    int year;
    int lower, upper, step;

    principle = 1000;
    interest = 1.1;

    lower = 1;      /* lower limit of year table */
    upper = 30;    /* upper limit */
    step = 1;      /* step size */
    
    money = principle;
    year = lower;
    while (year <= upper) {
        money = money * interest;  // Compound the interest
        printf("%d\t%f\n", year, money);  // Print the year and the amount of money after interest
        year = year + step;
    }

    return 0;
}
