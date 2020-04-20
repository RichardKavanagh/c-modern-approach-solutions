#include "stdio.h"

int main(void) {

	int num, digit_count;
	
	printf("%s", "Enter a number: ");
	scanf("%d", &num);

	if (num >= 0 && num <= 9) {
		digit_count = 1;
	} else if (num >= 10 && num <= 99) {
		digit_count = 2;
	} else if (num >= 100 && num <= 999) {
		digit_count = 3;
	} else {
		digit_count = 4;
	}

	printf("%s%d%s%d%s\n", "The number ", num, " has ", digit_count, " digits");
	return 0;
}