#include <stdio.h>

int main(void) {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("%d when reversed is: ", number);
    int quotient = number;
    int remainder;
    do {
        remainder = quotient % 10;
        quotient /= 10;
        printf("%d", remainder);
    } while (quotient);
    printf("\n");

    return 0;
}