#include <ctype.h>
#include <stdio.h>

int main(void) {
    printf("Enter name: ");
    char current_character;
    char first_name_initial;
    scanf("%c", &first_name_initial);

    do {
        scanf("%c", &current_character);
    } while (current_character != ' ');
    scanf("%c", &current_character);

    do {
        printf("%c", current_character);
        scanf("%c", &current_character);
    } while (current_character != '\n');

    printf(", %c.\n", first_name_initial);

    return 0;
}