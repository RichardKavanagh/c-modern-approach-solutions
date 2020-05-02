#include "stdio.h"

int main(void) {

	int total_days, start_day;
	printf("%s", "Enter number of days in month: ");
	scanf("%d", &total_days);

	printf("%s", "Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &start_day);

	printf("\n%s\n", "Mo Tu We Th Fr Sa Su");
	for (int i = 1; i < start_day; ++i) {
	    printf("%s", "-- ");
	}

	for (int i = 1; i <= total_days; ++i) {
		
		if ((start_day -2 + i)  % 7 == 0) {
			printf("\n");
		}
		printf("%.02d ", i);

	}

	printf("\n");
	return 0;
}
