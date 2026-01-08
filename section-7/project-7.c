#include <stdio.h>

typedef struct {
    long numerator;
    long denominator;
} Fraction;

Fraction add(Fraction a, Fraction b);
Fraction subtract(Fraction a, Fraction b);
Fraction multiply(Fraction a, Fraction b);
Fraction divide(Fraction a, Fraction b);
Fraction simplify(Fraction a);
int gcd(int integer_a, int integer_b);

int main(void) {
    Fraction a;
    Fraction b;

    char operation;
    printf("Enter expression: ");
    scanf("%ld/%ld %c %ld/%ld", &a.numerator, &a.denominator, &operation, &b.numerator,
          &b.denominator);

    // Handle division by zero
    if (a.denominator == 0 || b.denominator == 0) {
        printf("Invalid Fraction value\\s.\n");
        return 0;
    } else if (operation == '/' && b.numerator == 0) {
        printf("%ld/%ld %c %ld/%ld = Undefined\n", a.numerator, a.denominator, operation,
               b.numerator, b.denominator);
        return 0;
    }

    Fraction result;
    switch (operation) {
    case '+':
        result = add(a, b);
        break;
    case '-':
        result = subtract(a, b);
        break;
    case '*':
        result = multiply(a, b);
        break;
    case '/':
        result = divide(a, b);
        break;
    default:
        printf("Invalid operation.\n");
        return 0;
    }

    // Simplify the fraction
    result = simplify(result);

    // Don't print the denominator if the result is a whole number
    if (result.denominator == 1) {
        printf("%ld/%ld %c %ld/%ld = %ld\n", a.numerator, a.denominator, operation, b.numerator,
               b.denominator, result.numerator);
    } else {
        printf("%ld/%ld %c %ld/%ld = %ld/%ld\n", a.numerator, a.denominator, operation, b.numerator,
               b.denominator, result.numerator, result.denominator);
    }

    return 0;
}

Fraction add(Fraction a, Fraction b) {
    Fraction transformed_a = a;
    Fraction transformed_b = b;

    if (a.denominator != b.denominator) {

        // Make the fraction have the same denominator
        transformed_a.numerator = a.numerator * b.denominator;
        transformed_a.denominator = a.denominator * b.denominator;

        transformed_b.numerator = b.numerator * (transformed_a.denominator / b.denominator);
        transformed_b.denominator = transformed_a.denominator / b.denominator;
    }
    Fraction sum;
    sum.numerator = transformed_a.numerator + transformed_b.numerator;
    sum.denominator = transformed_a.denominator;

    return sum;
}
Fraction subtract(Fraction a, Fraction b) {
    b.numerator *= -1;
    Fraction difference = add(a, b);
    return difference;
}
Fraction multiply(Fraction a, Fraction b) {
    Fraction product;
    product.numerator = a.numerator * b.numerator;
    product.denominator = a.denominator * b.denominator;

    return product;
}
Fraction divide(Fraction a, Fraction b) {
    // Get the reciprocal of fraction b
    int temp = b.numerator;
    b.numerator = b.denominator;
    b.denominator = temp;

    Fraction quotient;
    quotient = multiply(a, b);

    return quotient;
}

Fraction simplify(Fraction a) {
    int divisor = a.numerator ? gcd(a.numerator, a.denominator) : a.denominator;

    Fraction simplified;
    simplified.numerator = a.numerator / divisor;
    simplified.denominator = a.denominator / divisor;
    return simplified;
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

    // Return the absolute value
    return smaller > 0 ? smaller : -smaller;
}