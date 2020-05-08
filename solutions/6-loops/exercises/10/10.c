/* Using a continue statement to skip printing the user entered input */

#include "stdio.h"

int main(void) {

    int input;
    printf("%s", "Please enter a number between 1 and 10 : ");
    scanf("%d", &input);

    for (int i = 1; i <= 10; ++i) {
        if (i == input) {
            continue;
        }
        printf("%d \n", i);
    }

    for (int i = 1; i <= 10; ++i) {
        if (i == input) {
            goto loop_end;
        }
        printf("%d \n", i);
        loop_end: ;
    }

    return 0;
}