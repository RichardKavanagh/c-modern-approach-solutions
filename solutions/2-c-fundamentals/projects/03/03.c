#define PI 3.14159f

#include "stdio.h"

int main(void)
{
	float radius;
	
	printf("%s\n", "Please enter the sphere radius as an integer ...");
	scanf("%f", &radius);

	float volume = 4.0f / 3.0f * (PI  * (radius * radius * radius));
	printf("Sphere volume is: %.2f cubic meters\n", volume);

	return 0;
}