#include "stdio.h"

int main(void)
{

	int day, month, year;

	printf("%s", "Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);
	printf("%s%d%.2d%.2d\n", "You entered the date ", year, month, day);

	return 0;
}