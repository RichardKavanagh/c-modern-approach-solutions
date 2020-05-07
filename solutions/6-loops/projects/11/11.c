#include "stdio.h"

int main(void) {

    float e;
    int i, n, denom;

    printf("%s\n", "For the infinite series '1 + 1/1! + 1/2! + 1/3! + ... + 1/n!'");
    printf("%s", "Please enter a value for n :");
    scanf("%d", &n);

    for (i = 1, denom = 1, e = 1.0f; i <= n; i++) {
        e += 1.0f / (denom *= i);
    }

    printf("%s%f\n", "Approximation of e: ", e);
    return 0;
}
