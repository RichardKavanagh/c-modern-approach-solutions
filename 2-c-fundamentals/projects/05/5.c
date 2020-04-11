#include "stdio.h"

int main(void)
{

	int x, x_squared, x_cubed, x_quad, x_pent;
	int result;

	printf("%s\n", "Please enter a value for x:");
	scanf("%d", &x);

	x_squared = x * x;
	x_cubed = x_squared * x;
	x_quad = x_cubed * x;
	x_pent = x_quad * x;

	result = (3 * x_pent) + (2 * x_quad) - (5 * x_cubed) - x_squared + (7 * x) - 6;
	printf("%d\n", result);

	return 0;
}
