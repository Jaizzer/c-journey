#include <stdio.h>

int main(void) {
    // Ask the user for their income
    float income;
    printf("Income: ");
    scanf("%f", &income);

    // Calculate the tax from the income
    float tax = 0;
    if (income < 750) {
        tax = income * 0.01;
    } else if (income < 2250) {
        tax = 7.5 + income * 0.02;
    } else if (income < 3750) {
        tax = 37.5 + income * 0.03;
    } else if (income < 5250) {
        tax = 82.5 + income * 0.04;
    } else if (income < 7000) {
        tax = 142.5 + income * 0.05;
    } else {
        tax = 230 + income * 0.06;
    }

    printf("Tax: $%0.2f\n", tax);

    return 0;
}