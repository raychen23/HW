#include <stdio.h>
#include <stdlib.h>

int main() {

	int a;
	int b;
	printf("enter one integer\n");
	scanf("%d", &a);
	b = a;

	while (a >= 2) {
		a = a / 2;
	}

	if (a == 1) {
		printf("%d is odd", b);
	}
	if (a == 0) {
		printf("%d is even", b);
	}
}