#include <stdio.h>

int gcd(int integer_a, int integer_b);

int main(void) {
    int numerator;
    int denominator;
    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    int divisor = gcd(numerator, denominator);

    printf("In lowest terms: %d/%d\n", numerator / divisor, denominator / divisor);

    return 0;
}

int gcd(int integer_a, int integer_b) {

    // Determine which is larger
    int larger, smaller;
    if (integer_a > integer_b) {
        larger = integer_a;
        smaller = integer_b;
    } else {
        larger = integer_b;
        smaller = integer_a;
    }

    // Perform Euclid's Algorithm for GCD
    for (int remainder;;) {
        remainder = larger % smaller;
        if (!remainder) {
            break;
        }
        larger = smaller;
        smaller = remainder;
    }

    return smaller;
}