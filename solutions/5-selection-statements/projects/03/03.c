/* Calculates a broker's commission *//* Calculates a broker's commission */

#include "stdio.h"

int main(void) {

    int shares;
    float commission, price, value;

    printf("%s", "Enter number of shares: ");
    scanf("%d", &shares);

    printf("%s", "Enter price per-share: ");
    scanf("%f", &price);

    value = price * shares;

    if (value < 2500.00f) {
        commission = 30.00f + 0.17f * value;
    } else  if (value < 6250.00f) {
        commission = 56.00f + 0.66f * value;
    } else  if (value < 20000.00f) {
        commission = 76.00f + .0034f * value;
    } else  if (value < 50000.00f) {
        commission = 100.00f + .0022f * value;
    }  else if (value < 500000.00f) {
        commission = 155.00f + .0011f * value;
    } else {
        commission = 255.00f + .0009f * value;
    }

    if (commission < 39.00f) {
        commission = 39.00f;
    }

    printf("Commission: $%.2f\n", commission);

    if (shares < 2000) {
        commission = 33.00f + .03f * shares;
    } else {
        commission = 33.00f + .02f * shares;
    }

    printf("Rival Broker Commission: $%.2f\n", commission);

    return 0;
}


#include "stdio.h"

int main(void) {

    int shares;
    float commission, price, value;

    printf("%s", "Enter number of shares: ");
    scanf("%d", &shares);

    printf("%s", "Enter price per-share: ");
    scanf("%f", &price);

    value = price * shares;

    if (value < 2500.00f) {
        commission = 30.00f + 0.17f * value;
    } else  if (value < 6250.00f) {
        commission = 56.00f + 0.66f * value;
    } else  if (value < 20000.00f) {
        commission = 76.00f + .0034f * value;
    } else  if (value < 50000.00f) {
        commission = 100.00f + .0022f * value;
    }  else if (value < 500000.00f) {
        commission = 155.00f + .0011f * value;
    } else {
        commission = 255.00f + .0009f * value;
    }

    if (commission < 39.00f) {
        commission = 39.00f;
    }

    printf("Commission: $%.2f\n", commission);

    if (shares < 2000) {
        commission = 33.00f + .03f * shares;
    } else {
        commission = 33.00f + .02f * shares;
    }

    printf("Rival Broker Commission: $%.2f\n", commission);

    return 0;
}
