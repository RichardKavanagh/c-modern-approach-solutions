#include "stdio.h"

int main(void) {

    int n;
    printf("%s", "Enter a number : ");
    scanf("%d", &n);

    for (int d = 2; d * d < n; d++) {
        if (n % d == 0) {
            printf("%s\n", "Number entered is not a prime ...");
            break; 
        }
    }
    return 0;
}