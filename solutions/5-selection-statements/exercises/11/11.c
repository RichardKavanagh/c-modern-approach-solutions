#include "stdio.h"

int main(void)  {

    int area_code;
    printf("%s", "Please enter a Georgia area code: ");
    scanf("%d", &area_code);

    switch (area_code) {
        case 229: 
            printf("%s\n", "Albany");
            break;
        case 478:
            printf("%s\n", "Macon");
            break;
        case 912: 
            printf("%s\n", "Savannah");
            break;
        case 706: case 762:
            printf("%s\n", "Columbus");
            break;
        case 404: case 470: 
        case 678: case 770: 
            printf("%s\n", "Atlanta");
            break;
        default:
            printf("%s\n", "Area code not recognized");
    }
    return 0;
}
