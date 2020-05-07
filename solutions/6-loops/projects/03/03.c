#include "stdio.h"

int main(void) {

    int num, denom, m, n, temp;

    printf("%s", "Enter a fraction: ");
    scanf("%d/%d", &num, &denom);

    m = num;
    n = denom;

    do {
        temp = m % n;
        m = n;
        n = temp;
    } while (n != 0);

    printf("%s%d/%d\n", "In lowest terms: ", num / m, denom / m);
    return 0;
}