#include <stdio.h>
#include <stdlib.h>
int main()
{
	float w, h, a, b;

	printf("enter your weight");
	scanf("%f", &w);
	printf("enter your height");
	scanf("%f", &h);
	a = h / 100;
	b = w / (a*a);
	if (b < 18.5) {
		printf("your BMI is %.2f too light", b);

	}

	else if (18.5 <= b && b < 24) {
		printf("your BMI is %.2f suitable", b);

	}

	else {
		printf("your BMI is %.2f too heavy", b);

	}
	return 0;
}