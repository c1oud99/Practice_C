#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:4996)

int main() {

	int m;

	scanf("%d", &m);
	printf("money?>%d\n", m);
	
	printf("10000:%d\n", m / 10000);
	printf("5000:%d\n", ((m %= 10000) / 5000));
	printf("1000:%d\n", ((m %= 5000) / 1000));
	printf("500:%d\n", ((m %= 1000) / 500));
	printf("100:%d\n", ((m %= 500) / 100));
	printf("50:%d\n", ((m %= 100) / 50));
	printf("10:%d\n", ((m %= 50) / 10));
	printf("5:%d\n", ((m %= 10) / 5));
	printf("1:%d", ((m %= 5) / 1));

	return 0;
}