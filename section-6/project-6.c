#include <stdio.h>

int main(void) {
    int n;
    printf("This program prints all even squares between 1 and n.\nEnter n: ");
    scanf("%d", &n);

    for (int i = 2, square = 4; square < n; i += 2) {
        printf("%d\n", square);
        square = i * i;
    }

    return 0;
}