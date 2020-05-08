#include "stdio.h"

int main(void) {
    
    int input, first_digit, second_digit;

    printf("%s", "Enter a two-digit number: ");
    scanf("%d", &input);

    first_digit = input / 10;
    second_digit = input % 10;

    printf("%s%d%d\n", "The reversal is: ", second_digit, first_digit);

    return 0;
}
