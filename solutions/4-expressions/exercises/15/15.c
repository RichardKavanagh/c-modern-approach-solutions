#include "stdio.h"

int main(void)
{
	int i = 1;
	int j = 2;

	i += j;
	printf("%d %d\n", i, j);

	i--;
	printf("%d %d\n", i, j);

	// has no effect on i or j
	i * j / i;
	// has no effect on i or j
	i % ++j;

	return 0;
}

