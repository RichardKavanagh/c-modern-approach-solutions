#include "stdio.h"

int main(void) {

    int input;
	
    printf("%s", "Please enter a number: ");
    scanf("%d", &input);

    for (int i = 1; i * i <= input; ++i) {

        if (i * i % 2 == 0) {
            printf("%d\n", i * i);
        }
    }

    return 0;
}
