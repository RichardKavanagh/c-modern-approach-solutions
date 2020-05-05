#include "stdio.h"

int main(void) {

	int day = 31, month = 12, year = 1000;
	int user_day = 1, user_month = 1, user_year = 1;

	do {

		printf("%s", "Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &user_month, &user_day, &user_year);

        if (user_day == 0 && user_month == 0 && user_year == 0) {
        	break;
        } else if (user_year < year  || (year == user_year && user_month < month) || (year == user_year && month == user_month && user_day < day)) {
			day = user_day;
			month = user_month;
			year = user_year;
		} 

	} while(user_day != 0 && user_month != 0 && user_year != 0);

	printf("%d/%d/%d%s", month, day, year, " is the earliest date \n");
	return 0;
}
