#include "stdio.h"

int main(void) {


	int hour, min, mins_since_midnight;
	printf("%s", "Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &min);

	mins_since_midnight = hour * 60 + 15;


	




	printf("%s%d\n", "Closest departure time is ", mins_since_midnight);

	return 0;
}

/*

Enter a 24-hour time: 13:15
Closest departure time is 12:47 p.m., arriving at 3:00 p.m.

*/