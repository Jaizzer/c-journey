#include <stdio.h>

int main(void) {
    float height = 2;
    float width = 3;
    float length = 5;

    float volume = height * width * length;

    float weight = (volume + 165) / 166;

    printf("Dimensions: %.2f x %.2f x%.2f\n", length, width, height);
    printf("Volume: %.2f\n", volume);
    printf("Dimension Weight: %.2f\n", weight);

    return 0;
}