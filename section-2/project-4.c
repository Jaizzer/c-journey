#include <stdio.h>

#define TAX_PERCENTAGE 5

int main(void) {
    // Prompt the user for the amount
    float money;
    printf("Enter an amount: ");
    scanf("%f", &money);

    // Calculate the total amount
    float tax = money * (TAX_PERCENTAGE / 100.0);
    float total_amount = money + tax;

    // Display the total amount
    printf("With tax added: $%0.2f\n", total_amount);

    return 0;
}