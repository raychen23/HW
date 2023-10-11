#include <stdlib.h>
#include <stdio.h>

int main()
{

	float a, b, c, z, d, e;
	printf("enter total miles driven per day\n");
	scanf("%f", &a);

	printf("enter cost per gallono gasoline\n");
	scanf("%f", &b);

	printf("average miles per gallon\n");
	scanf("%f", &c);

	printf("enter parking fee per day\n");
	scanf("%f", &d);

	printf("enter tolls per day\n");
	scanf("%f", &e);

	z = d + e + ((a / c)*b);
	printf("all day cost %f", z);
	return 0;
}