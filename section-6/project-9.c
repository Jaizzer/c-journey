#include <stdio.h>

int main(void) {
    // Ask the user for the amount to loan
    float loan = 0;
    printf("Enter the amount of loan: ");
    scanf("%f", &loan);

    // Initialize the remaining balance
    float balance = loan;

    // Ask the user for the interest rate
    float interest_rate = 0;
    printf("Enter the interest rate in percentage: ");
    scanf("%f", &interest_rate);

    // Ask the user for the amount of monthly payments
    float monthly_payments = 0;
    printf("Enter the monthly payments: ");
    scanf("%f", &monthly_payments);

    // Ask the user for the number of monthly payments to be made
    int number_of_monthly_payments;
    printf("Enter the number of monthly payments: ");
    scanf("%d", &number_of_monthly_payments);

    // Calculate the monthly interest rate
    float monthly_interest_rate = (interest_rate / 100) / 12;

    for (int i = 0; i < number_of_monthly_payments; i++) {
        // Calculate the balance after the first payment
        balance = (balance - monthly_payments) + balance * monthly_interest_rate;
        printf("Balance after Month %d payment: $%.2f\n", i + 1, balance);
    }
    return 0;
}