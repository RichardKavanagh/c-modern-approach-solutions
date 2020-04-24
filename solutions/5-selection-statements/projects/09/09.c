#include "stdio.h"

int main(void) {

	int first_day, first_month, first_year;
	int second_day, second_month, second_year;

	printf("%s", "Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &first_month, &first_day, &first_year);

	printf("%s", "Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &second_month, &second_day, &second_year);

	if (first_year < second_year || first_month < second_month || first_day < second_day) {
		printf("%02d/%02d/%02d%s%02d/%02d/%02d\n", second_month, second_day, second_year, " is earlier than ", first_month, first_day, first_year);
	} else {
		printf("%02d/%02d/%02d%s%02d/%02d/%02d\n", first_month, first_day, first_year, " is earlier than ", second_month, second_day, second_year);
	}

	return 0;
}
