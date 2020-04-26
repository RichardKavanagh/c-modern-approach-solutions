#include "stdio.h"

int main(void) {

	float input, largest;
	largest = 0.0f;

	do {
		printf("%s", "Enter a number: ");
		scanf("%f", &input);

		if (input > largest) {
			largest = input;
		}

	} while (input > 0);

	printf("\n%s%.2f\n", "The largest number entered was ", largest);

	return 0;
}