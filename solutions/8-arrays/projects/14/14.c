#include <stdio.h>

#define MESSAGE 50

int main(void) {

    char ch;
    int len = 0;
    char input[MESSAGE];

    printf("%s", "Enter a sentence: ");
    do {
        ch = getchar();
        input[len] = ch;
        len++;
    } while(ch != '!' && ch != '?' && ch != '.');


    printf("%s", "Reversal of sentence: ");

    printf("\n");
    return 0;
}
