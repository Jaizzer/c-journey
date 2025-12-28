#include <stdio.h>

int main(void) {
    float largest_number;
    float current_input;
    do {
        printf("Enter a number: ");
        scanf("%f", &current_input);
        if (largest_number != 0 && current_input > largest_number) {
            largest_number = current_input;
        }
    } while (current_input > 0);
    printf("The largest number entered was %.2f\n", largest_number);

    return 0;
}