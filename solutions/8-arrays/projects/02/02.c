#include <stdio.h>
#include <stdbool.h>

#define BASE_DECIMAL 10

int main(void) {

    long n;
    int digit;
    int digit_repeated[BASE_DECIMAL] = { 0 };

    printf("%s", "Enter a number:  ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        digit_repeated[digit]++;
        n /= 10;
    }

    printf("%s\n", "Digit: \t\t 0 1 2 3 4 5 6 7 8 9");
    printf("%s", "Occurences:\t ");
    for (int i = 0; i < BASE_DECIMAL; ++i) {
       printf("%d%s",  digit_repeated[i], " ");
    }
    printf("\n");

    return 0;
}
