#include <stdlib.h>
#include <stdio.h>

int main()
{
	int k, h;
	for (int i = 0; i < 11; i++) {
		k = i * i;
		h = i * i*i;
		printf("%d   %d   %d\n", i, k, h);
	}
}
