/*	Euclid's algorithm	*/

#include "stdio.h"

int main(void) {

	int m, n, temp;

	printf("%s", "Enter two integers: ");
	scanf("%d%d", &m, &n);

	do {
		temp = m % n;
		m = n;
		n = temp;

	} while (n != 0);

	printf("%s%d\n", "Greatest common divisor: ", m);
	return 0;
}
