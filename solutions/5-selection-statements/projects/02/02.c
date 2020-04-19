#include "stdio.h"

int main(void)
{
	int hour, mins, time;

	printf("%s", "Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &mins);


	printf("%s%d%s%d\n", "Equivalent 12-hour time: ", hour, ":", mins);

	return 0;
}

/*

Enter a 24-hour time: 21:11
Equivalent 12-hour time: 9:11 PM

*/