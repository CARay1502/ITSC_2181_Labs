#include <stdio.h>

int main() {
    int income;
    float tax;
    int dependents;
    int credit;

    printf("Enter income: ");
    scanf("%f", &income);

    if (income <= 9275) {
        tax = income * 0.12;
        return tax;
    } else if (income <= 37650) {
        tax = income * 0.17;
        return tax;
    } else if (income <= 91150) {
        tax = income * 0.27;
        return tax;
    } else if (income <= 190150) {
        tax = income * 0.30;
        return tax;
    } else if (income > 190150) {
        tax = income * 0.35;
        return tax;
    }
    printf("Tax due = %.2f\n", tax);
    printf("Enter the number of dependents (0 for none): ");
    scanf(" %f", &dependents);

    if (dependents <= 5) {
        credit = dependents * 450;
        return credit;
    } else {
        credit = 2250;
        return credit;
    }
    printf("Tax credit: %.2f\n", credit);

    float adjustedTax = tax - credit;
    printf("Adjusted Tax = %.2f\n", adjustedTax);

}