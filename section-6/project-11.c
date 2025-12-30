#include <stdio.h>

int main(void) {
    int n;
    printf("This program approximates Euler's Constant with 1 + 1/1! + 1/2! + 1/3! + … + 1/n!.\n"
           "Enter n: ");
    scanf("%d", &n);

    float sum = 0;
    int factorial = 1;

    for (int i = 0; i <= n; i++) {
        if (i == 0) {
            sum += 1;
        } else {
            factorial *= i;
            sum += (1.0 / factorial);
        }
    }
    printf("Approximation: %0.4f\n", sum);
    return 0;
}