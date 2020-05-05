#include "stdio.h"

int main(void) {

    int input, first_digit;

    printf("%s", "Enter a n-digit number: ");
    scanf("%d", &input);

	do {

        first_digit = input % 10;
        input = input / 10;
        printf("%d", first_digit);

	} while(input > 0);

	printf("\n");
	return 0;
}
