#include <stdio.h>
#include <ctype.h>

#define N 15

int main(void) {

    char ch;
    int len = 0;
    char input[N];

    printf("%s", "Enter phone number: ");
    while((ch = getchar()) != '\n') {
        input[len] = ch;
        len++;
    }

    printf("%s", "In numeric form: ");
    for (int i = 0; i < len; ++i) {

        switch(input[i]) {
            case 'A': case 'B': case 'C':
                putchar('2');
                break;
            case 'D': case 'E': case 'F':
                putchar('3');
                break;
            case 'G': case 'H': case 'I':
                putchar('4');
                break;
            case 'J': case 'K': case 'L':
                putchar('5');
                break;
            case 'M': case 'N': case 'O':
                putchar('6');
                break;
            case 'P': case 'R': case 'S':
                putchar('7');
                break;
            case 'T': case 'U': case 'V':
                putchar('8');
                break;
            case 'W': case 'X': case 'Y':
                putchar('9');
                break;
            default:
                putchar(ch);
        }
    }
    printf("%s\n", "");
    return 0;
}
