#include "stdio.h"

int main(void)
{

	float amount = 0.0f;
	printf("%s", "Enter an amount:");
	scanf("%f", &amount);
	printf("With tax added: $%.2f\n",  amount * 1.05f);

	return 0;
}