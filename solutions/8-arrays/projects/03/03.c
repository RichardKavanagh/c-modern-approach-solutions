/* Checks numbers for repeated digits */

#include <stdio.h>
#include <stdbool.h>

#define BASE 10

int main(void) {

    int digit;
    long n, loop;
    bool repeated = false;
    bool digit_seen[BASE];
    bool digit_repeated[BASE];;

    loop = 1;
    while(loop >= 0) {

        printf("%s", "Enter a number: ");
        scanf("%ld", &n);
        loop = n;

        for (int i = 0; i < BASE; ++i) {
            digit_seen[i] = false;
            digit_repeated[i] = false;
        }

        while (n > 0) {
            digit = n % 10;
            if (digit_seen[digit]) {
                digit_repeated[digit] = true;
                repeated = true;
            }
            digit_seen[digit] = true;
            n /= 10;
        }

        if (repeated) {
            printf("%s", "Repeated digit(s) : ");
            for (int i = 0; i < BASE; ++i) {
                if (digit_repeated[i]) {
                    printf("%d%s", i, " ");
                }
            }
        } else {
            printf("%s", "No repeated digit(s)");
        }
        printf("\n");
    }

    return 0;
}
