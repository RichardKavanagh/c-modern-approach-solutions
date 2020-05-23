/* Basic caesar cipher implementation */
#include <stdio.h>

#define MAX_INPUT 80

int main(void) {

    int n;
    int len = 0;
    char ch;
    char input[MAX_INPUT] = { 0 };

    printf("%s", "Enter message to be encrypted: ");
    while ((ch = getchar()) != '\n') {
        input[len] = ch;
        len++;
    }

    printf("%s", "Enter shift amount (1-25): ");
    scanf("%d", &n);

    printf("%s", "Encrypted message: ");
    for (int i = 0; i < len; i++) {

        if (input[i] >= 'A' && input[i] <= 'Z') {
           input[i] = ((input[i] - 'A') + n) % 26 + 'A';
        } else if (input[i] >= 'a' && input[i] <= 'z') {
            input[i] = ((input[i] - 'a') + n) % 26 + 'a';
        }

        putchar(input[i]);
    }
    printf("\n");
    return 0;
}
