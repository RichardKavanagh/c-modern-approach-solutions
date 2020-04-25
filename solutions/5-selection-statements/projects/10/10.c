#include "stdio.h"

int main(void) {

	int grade;
	printf("%s", "Enter numerical grade: ");
	scanf("%d", &grade);

	if (grade < 0  || grade > 100) {
		grade = -1;
	}

	printf("%s", "Letter grade: ");
	switch (grade / 10) {
		case (9):  case (10): 
			printf("%s\n", "A"); break;
		case (8):  
			printf("%s\n", "B"); break;
		case (7):  
			printf("%s\n", "C"); break;
		case (6):  
			printf("%s\n", "D"); break;
		case (5): case (4): case (3): 
		case (2): case (1): case (0): 
			printf("%s\n", "F"); break;
		default: 
			printf("%s\n", "Invalid grade entered");
	}

	return 0;
}
