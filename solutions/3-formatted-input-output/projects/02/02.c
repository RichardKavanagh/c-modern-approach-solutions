#include "stdio.h"

int main(void)
{
	float item_price;
	int item_num, day, month, year;

	printf("%s", "Enter item number: ");
	scanf("%d", &item_num);

	printf("%s", "Enter unit price: ");
	scanf("%f", &item_price);

	printf("%s", "Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
	printf("%d\t\t$%8.2f\t%.2d/%.2d/%.4d\n", item_num, item_price, month, day, year);

	return 0;
}


