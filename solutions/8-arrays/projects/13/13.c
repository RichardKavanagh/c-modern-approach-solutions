#include <stdio.h>

#define N 10

int main(void) {

    int len = 0;
    char ch, first_inital, last_name[N];
    printf("%s", "Enter a first and last name: ");

    first_inital = getchar();
    while ((getchar()) != ' ') { ; }
    
    while ((ch = getchar()) != '\n') {
        last_name[len] = ch;
        len++;
    }

    printf("%s", "You entered the name: " );
    for (int i = 0; i < len; ++i) {
        putchar(last_name[i]);
    }
    printf("%s%c%s\n", ", ", first_inital, ".");

    return 0;
}
