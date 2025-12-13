#include <stdio.h>

int main(void) {
    int numerator1, denominator1, numerator2, denominator2;
    printf("Enter fraction addition expression: ");
    scanf("%d/%d+%d/%d", &numerator1, &denominator1, &numerator2, &denominator2);

    int numerator = numerator1 * denominator2 + numerator2 * denominator1;
    int denominator = denominator1 * denominator2;

    printf("%d/%d\n", numerator, denominator);

    return 0;
}