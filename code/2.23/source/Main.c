#include <stdlib.h>
#include <stdio.h>

int main(void) {

	int a, b, c;
	printf("��J3�Ӥ��P�����");
	scanf("%d%d%d", &a, &b, &c);

	if (a > b && a > c && b > c) {

		printf("a�O�̤j�� c�O�̤p��");
	}
	if (a > b && a > c && c > b) {

		printf("a�O�̤j�� b�O�̤p��");
	}
	if (b > a && b > c && a > c) {

		printf("b�O�̤j�� c�O�̤p��");
	}
	if (b > a && b > c && c > a) {

		printf("b�O�̤j�� a�O�̤p��");
	}
	if (c > a && c > b && b > a) {

		printf("c�O�̤j�� a�O�̤p��");
	}
	if (c > a && c > b && a > b) {

		printf("c�O�̤j�� b�O�̤p��");
	}
	return 0;
}