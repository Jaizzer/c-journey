#include <stdio.h>

int main(void) {
    int number;
    printf("Enter a 2-digit number: ");
    scanf("%d", &number);

    // Extract the two digits
    int tens_digit = number / 10;
    int ones_digit = number % 10;

    // Reverse the digit
    int reversed_digit = ones_digit * 10 + tens_digit;

    printf("The reversal is: %d\n", reversed_digit);

    return 0;
}