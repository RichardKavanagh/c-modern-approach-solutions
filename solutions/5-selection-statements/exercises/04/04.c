#include "stdio.h"

int main(void)
{
	int i, j;
	i = 2;
	j = 1;

	printf("%d\n", (i > j) - (i < j));

	return 0;
}