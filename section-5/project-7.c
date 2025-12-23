#include <stdio.h>

int main(void) {
    int first_integer;
    int second_integer;
    int third_integer;
    int fourth_integer;
    printf("Enter four integer: ");
    scanf("%d %d %d %d", &first_integer, &second_integer, &third_integer, &fourth_integer);

    int smallest_integer_a = second_integer;
    int smallest_integer_b = fourth_integer;

    int largest_integer_a = first_integer;
    int largest_integer_b = third_integer;

    if (first_integer < second_integer) {
        largest_integer_a = second_integer;
        smallest_integer_a = first_integer;
    }

    if (third_integer < fourth_integer) {
        largest_integer_b = fourth_integer;
        smallest_integer_b = third_integer;
    }

    int largest_integer = largest_integer_a;
    int smallest_integer = smallest_integer_a;

    if (largest_integer_a < largest_integer_b) {
        largest_integer_a = largest_integer_b;
    }

    if (smallest_integer_b < smallest_integer_a) {
        smallest_integer = smallest_integer_b;
    }

    printf("Largest: %d\nSmallest: %d\n", largest_integer, smallest_integer);
    return 0;
}