#include <stdlib.h>
#include <stdio.h>

int main()
{
	printf("    *     \n");
	printf("   ***    \n");
	printf("  *****   \n");
	printf(" *******  \n");
	printf("********* \n");

	int i, space, rows = 5, k = 0;
	for (i = 1; i <= rows; ++i, k = 0)
	{
		for (space = 1; space <= rows - i; ++space)
		{
			printf("  ");
		}

		while (k != 2 * i - 1)
		{
			printf("* ");
			k++;
		}

		printf("\n");
	}

}