#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void) {
    float fahrenheit, celsius;

    // Prompt the user for the temperature
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert the temperature from fahrenheit to celsius
    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("%.2f Fahrenheit = %.2f\n", fahrenheit, celsius);

    return 0;
}