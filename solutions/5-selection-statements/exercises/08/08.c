#include "stdbool.h"
#include "stdio.h"

int main(void) {
    
    int age = 16;
    bool teenager;

    teenager = (age >= 13 && age <= 19);
    printf("%d\n", teenager);

    return 0;
}