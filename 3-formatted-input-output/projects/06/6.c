/* Adds two fractions */

#include "stdio.h"

int main(void)
{

	int num1, denom1, num2, denom2, result_num, result_denom;

	printf("%s", "Enter two fractions seperated by a plus sign: ");
	scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;

	printf("%s%d/%d\n", "The sum is ", result_num, result_denom);

	return 0;
}

