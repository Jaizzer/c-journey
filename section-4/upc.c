#include <stdio.h>

int main(void) {
    int first_digit;
    int second_digit;
    int third_digit;
    int fourth_digit;
    int fifth_digit;
    int sixth_digit;
    int seventh_digit;
    int eight_digit;
    int ninth_digit;
    int tenth_digit;
    int eleventh_digit;
    int twelfth_digit;

    printf("Enter the UPC code: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d", &first_digit, &second_digit, &third_digit,
          &fourth_digit, &fifth_digit, &sixth_digit, &seventh_digit, &eight_digit, &ninth_digit,
          &tenth_digit, &eleventh_digit, &twelfth_digit);

    int first_sum =
        first_digit + third_digit + fifth_digit + seventh_digit + ninth_digit + eleventh_digit;
    int second_sum = second_digit + fourth_digit + sixth_digit + eight_digit + tenth_digit;

    int a = first_sum * 3;
    int b = second_sum + a;
    int total = b - 1;
    int remainder = total % 10;
    int final = 9 - remainder;

    printf("Final Check Digit: %d\n", final);

    return 0;
}