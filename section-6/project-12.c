#include <stdio.h>

int main(void) {
    float desired_error;
    printf("This program approximates Euler's Constant using Taylor Series.\n"
           "Enter error (ε): ");
    scanf("%f", &desired_error);

    float sum = 0;
    int factorial = 1;

    int i = 0;
    float current_term = 0;
    while (1) {
        if (i == 0) {
            current_term = 1;
        } else {
            factorial *= i;
            current_term = (1.0 / factorial);
        }
        if (current_term < desired_error) {
            break;
        }
        sum += current_term;
        i++;
    }
    printf("Approximation: %0.5f\n", sum);
    return 0;
}