#include <stdio.h>

int main(void) {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int number_of_digits;
    if (number > 999 && number <= 9999) {
        number_of_digits = 4;
    } else if (number > 99 && number <= 999) {
        number_of_digits = 3;
    } else if (number > 9 && number <= 99) {
        number_of_digits = 2;
    } else {
        number_of_digits = 1;
    }

    printf("The number %d has %d digit\\s\n", number, number_of_digits);

    return 0;
}