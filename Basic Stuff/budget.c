#include <stdio.h>

int main() {
    double income, rent, groceries, entertainment, other_expenses;

    printf("Enter your monthly income: ");
    scanf("%lf", &income);

    printf("Enter your monthly expenses (rent, groceries, entertainment, others): ");
    scanf("%lf %lf %lf %lf", &rent, &groceries, &entertainment, &other_expenses);

    double total_expenses = rent + groceries + entertainment + other_expenses;
    double remaining_balance = income - total_expenses;

    printf("Remaining balance after expenses: %.2f\n", remaining_balance);

    return 0;
}
