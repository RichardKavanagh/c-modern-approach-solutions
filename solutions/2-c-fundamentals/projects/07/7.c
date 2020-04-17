#include "stdio.h"

int main(void)
{
	int twenty_bills, ten_bills, five_bills;
	int amount;

	printf("%s", "Enter a dollar amount: ");
	scanf("%d", &amount);

	twenty_bills = amount / 20;
	amount = amount - (twenty_bills * 20);

	ten_bills = amount / 10;
	amount = amount - (ten_bills * 10);

	five_bills = amount / 5;
	amount = amount - (five_bills * 5);

	printf("$20 bills: %d\n",  twenty_bills);
	printf("$10 bills: %d\n",  ten_bills);
	printf(" $5 bills: %d\n",  five_bills);
	printf(" $1 bills: %d\n",  amount);

	return 0;
}