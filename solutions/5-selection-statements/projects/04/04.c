#include "stdio.h"

int main(void) {

	int wind_speed;

	printf("%s", "Please enter a wind speed (in knots): ");
	scanf("%d", &wind_speed);

	if (wind_speed < 1) {
		printf("%s\n", "Calm");
	} else if (wind_speed > 1 && wind_speed < 3) {
		printf("%s\n", "Light air");
	} else if (wind_speed > 4 && wind_speed < 27) {
		printf("%s\n", "Breeze");
	}
	else if (wind_speed > 48 && wind_speed <= 63) {
		printf("%s\n", "Gale");
	} else if (wind_speed > 63) {
		printf("%s\n", "Hurricane");
	} else {
		printf("%s\n", "Invalid wind speed entered");
	}

	return 0;
}
