#include <stdio.h>

int main(void) 
{
    int input, first_digit, second_digit, third_digit;

    printf("%s", "Enter a three-digit number: ");
    scanf("%d", &input);

    first_digit = input % 10;
    second_digit = (input / 10) % 10;
    third_digit = input / 100;

    printf("The reversal is: %d%d%d\n", first_digit, second_digit, third_digit);

    return 0;
}