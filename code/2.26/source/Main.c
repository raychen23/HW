#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a, b;
	printf("enter two interger");
	scanf("%d %d", &a, &b);
	if (a > b) {
		if (a%b == 0) {

			printf("%d is %d multiple ", a, b);
		}
	}

	if (b > a) {
		if (b%a == 0) {

			printf("%d is %d multiple ", b, a);
		}
	}

	return 0;
}