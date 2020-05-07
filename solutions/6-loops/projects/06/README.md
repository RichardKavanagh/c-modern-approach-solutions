### C Loops - Project 6.06#include "stdio.h"

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


Write a program that prompts the user to enter a number n, then prints all even squares between 1 and n.
For example, if the user enters 100, the program should print the following:

```
4
16
36
64
100
```

### Solution

See ```06.c```
