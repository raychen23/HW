#include <stdlib.h>
#include <stdio.h>

int main(void) {

	int a, b, c;
	printf("块3ぃ俱计");
	scanf("%d%d%d", &a, &b, &c);

	if (a > b && a > c && b > c) {

		printf("a琌程 c琌程");
	}
	if (a > b && a > c && c > b) {

		printf("a琌程 b琌程");
	}
	if (b > a && b > c && a > c) {

		printf("b琌程 c琌程");
	}
	if (b > a && b > c && c > a) {

		printf("b琌程 a琌程");
	}
	if (c > a && c > b && b > a) {

		printf("c琌程 a琌程");
	}
	if (c > a && c > b && a > b) {

		printf("c琌程 b琌程");
	}
	return 0;
}