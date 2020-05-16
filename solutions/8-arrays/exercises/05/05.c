#include <stdio.h>

#define N 40
#define SIZE ((int) (sizeof(fib_numbers) / sizeof(fib_numbers[0])))

int main(void) {

    int fib_numbers[N] = { 1, 1 };

    for (int i = 2; i < SIZE; ++i) {
        fib_numbers[i] = fib_numbers[i - 2] + fib_numbers[i - 1];
    }

    for (int i = 0; i < SIZE; ++i) {
        printf("%d%s", fib_numbers[i], " ");
    }   

    return 0;
}
