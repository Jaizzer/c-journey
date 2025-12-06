#include <stdio.h>

int main(void) {
   int i = 40;
   printf("|%d|%5d|%-5d|%5.4d|\n", i, i, i, i);
   return 0;
}