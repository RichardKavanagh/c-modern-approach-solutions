#include <stdio.h>

#define DAYS 30
#define HOURS 24

int main(void) {

    double average = 0.0;
    const double temperature_readings [DAYS][HOURS] = { 0.0 };

    for (int i = 0; i < DAYS; ++i) {
        for (int j = 0; i < HOURS; ++i) {
            average += temperature_readings[i][j];
        }
    }
    printf("%s%.2f\n", "Average temperature reading: ", average);
    return 0;
}
