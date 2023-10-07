#include <stdlib.h>
#include <stdio.h>

int main(void) {

	int a, b, c;
	printf("enter 3 different intergers");
	scanf("%d%d%d", &a, &b, &c);

	if (a > b && a > c && b > c) {

		printf(a, "is the biggest", c ,"is the smallest");
	}
	if (a > b && a > c && c > b) {

		printf(a, "is the biggest", b, "is the smallest");
	}
	if (b > a && b > c && a > c) {

		printf(b, "is the biggest", c, "is the smallest");
	}
	if (b > a && b > c && c > a) {

		printf(b, "is the biggest", a, "is the smallest");
	}
	if (c > a && c > b && b > a) {

		printf(c, "is the biggest", a, "is the smallest");
	}
	if (c > a && c > b && a > b) {

		printf(c, "is the biggest", b, "is the smallest");
	}
	return 0;
}