#define PI 3.14159f

#include "stdio.h"

int main(void) {

    // Assume radius of 10, rad^3 = 1000
    float volume = 4.0f / 3.0f * (PI  * 1000);
    printf("Sphere volume: %.2f cubic meters\n", volume);

    return 0;
}
