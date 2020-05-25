#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>

#define N 50

int main(void) {

    int len = 0;
    char ch;
    char input[N];
    srand((unsigned) time(NULL));

    printf("%s", "Enter message: ");
    while((ch = getchar()) != '\n') {
        input[len] = ch;
        len++;
    }

    for (int i = 0; i < N; ++i) {
        ch = input[i];
        switch(ch) {
            case 'a': input[i] = '4'; break;
            case 'b': input[i] = '8'; break;
            case 'e': input[i] = '3'; break;
            case 'i': input[i] = '1'; break;
            case 'o': input[i] = '0'; break;
            case 's': input[i] = '5'; break;
            /* Fall through so all characters converted */
            default: input[i] = toupper(ch);
        }
    }

    /* generate a number between 8 and 12 */
    int random_number = (rand() % 12) + 10;
    for (int i = 1; i < random_number; ++i) {
        input[len + i] = '!';
    }

    printf("%s", "In B1FF-speak: ");
    for (int i = 0; i < len + random_number; ++i) {
        printf("%c", input[i]);
    }

    printf("\n");
    return 0;
}
