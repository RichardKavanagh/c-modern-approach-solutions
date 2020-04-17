#include "stdio.h"

int main(void)
{
	int prefix, area_code, house;
	
	printf("%s", "Enter phone number [(xxx) xxx-xxxx]: ");

	scanf("(%d) %d-%d", &prefix, &area_code, &house);
	printf("%s%d.%d.%d\n", "You entered ", prefix, area_code, house);

	return 0;
}
