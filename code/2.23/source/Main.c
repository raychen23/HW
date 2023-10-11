#include <stdlib.h>
#include <stdio.h>

int main(void) {

	int a, b, c;
	printf("enter 3 different intergers");
	scanf("%d%d%d", &a, &b, &c);

	if (a > b && a > c && b > c) {

		printf("%d is the biggest %dis the smallest", a, c);
	}
	if (a > b && a > c && c > b) {

		printf("%d is the biggest %dis the smallest", a, b);
	}
	if (b > a && b > c && a > c) {

		printf("%d is the biggest %dis the smallest", b, c);
	}
	if (b > a && b > c && c > a) {

		printf("%d is the biggest %dis the smallest", b, a);
	}
	if (c > a && c > b && b > a) {

		printf("%d is the biggest %dis the smallest", c, a);
	}
	if (c > a && c > b && a > b) {

		printf("%d is the biggest %dis the smallest", c, b);
	}
	return 0;
}