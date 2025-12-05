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

    // Calculate the monthly interest rate
    float monthly_interest_rate = (interest_rate / 100 ) / 12;

    // Calculate the balance after the first payment
    balance = (balance - monthly_payments) + balance * monthly_interest_rate;
    printf("Balance after the first payment: $%.2f\n", balance);
        
    // Calculate the balance after the second payment
    balance = (balance - monthly_payments) + balance * monthly_interest_rate;
    printf("Balance after the second payment: $%.2f\n", balance);

    // Calculate the balance after the third payment
    balance = (balance - monthly_payments) + balance * monthly_interest_rate;
    printf("Balance after the third payment: $%.2f\n", balance);

    return 0;

}