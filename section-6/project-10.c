
#include <stdio.h>
#include <limits.h>

int main(void) {
    int month_a = INT_MAX;
    int day_a = INT_MAX;
    int year_a = INT_MAX;

    int month_b;
    int day_b;
    int year_b;

    for (;;) {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month_b, &day_b, &year_b);

        if (month_b == 0 && day_b == 0 && year_b == 0) {
            break;
        }

        if ((year_a && year_a > year_b) || (year_a == year_b && month_a > month_b) ||
            (year_a == year_b && month_a == month_b && day_a > day_b)) {
            month_a = month_b;
            day_a = day_b;
            year_a = year_b;
        }
    }
    if (month_a && day_a && year_a) {
        printf("%d/%d/%d is the earlier date\n", month_a, day_a, year_a);
    }
}