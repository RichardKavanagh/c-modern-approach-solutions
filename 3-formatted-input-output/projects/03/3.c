/* The Wide, Carnivorous Sky and Other Monstrous Geographies - John Langan
   ISBN: 9781614980544
*/

#include "stdio.h"

int main(void)
{

	int gsi_prefix, group_identifier, publisher_code, item_number, check_digit; 

	printf("%s", "Enter ISBN: ");	
	scanf("%d-%d-%d-%d-%d", &gsi_prefix, &group_identifier, &publisher_code, &item_number, &check_digit);

	printf("%s%d\n", "GSI prefix: ", gsi_prefix);
	printf("%s%d\n", "Group identifier: ", group_identifier);
	printf("%s%d\n", "Publisher code: ", publisher_code);
	printf("%s%d\n", "Item number: ", item_number);
	printf("%s%d\n", "Check digit: ", check_digit);

	return 0;
}