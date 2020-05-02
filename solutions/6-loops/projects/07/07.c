/* Prints a table of squares using an odd method */

#include "stdio.h"

int main(void) {

	int i, n, square;
	int odd = 3;

	printf("%s\n", "This program prints a table of squares.");
	printf("%s", "Enter number of entries in table: ");
	scanf("%d", &n);

	i = 1;
	for (square = 1; i <= n; odd += 2) {
        printf("%10d%10d\n", i, square);
        ++i;
        square += odd;
	}

	square = 1;
	for (int i = 1; i <= n; ++i) {
		odd += 2;
        printf("%10d%10d\n", i, square);
        square += odd;
	}


	return 0;
}

/*

Rearrange the ```square3.c``` program so that the ```for``` loop initializes ```i```, tests ```i```, and increments ```i```.
Don't rewrite the program; in particular, don't use any multiplications.


*/