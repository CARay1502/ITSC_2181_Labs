#include <stdio.h>

int main() {
    int income;
    float tax;
    int dependents;
    int credit;

    printf("Enter income: ");
    scanf("%d", &income);

    if (income <= 9275) {
        tax = income * 0.12;
    } else if (income <= 37650) {
        tax = income * 0.17;
    } else if (income <= 91150) {
        tax = income * 0.27;
    } else if (income <= 190150) {
        tax = income * 0.30;
    } else if (income > 190150) {
        tax = income * 0.35;
    }
    printf("Tax due = $%.2f\n", tax);
    
    clear_input_buffer();
    printf("Enter the number of dependents (0 for none): ");
    scanf(" %d", &dependents);

    if (dependents == 0) {
        credit = 0;
    } else if (dependents <= 5) {
        credit = dependents * 450;
    } else {
        credit = 2250;
    }
    printf("Tax credit: $%d\n", credit);

    float adjustedTax = tax - credit;
    printf("Adjusted Tax = $%.2f\n", adjustedTax);
    
    return 0;
}