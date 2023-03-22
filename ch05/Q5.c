#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:4996)

int main() {

	int a, b;

	printf("number:");
	scanf("%d", &a);
	printf("number for +:");
	scanf("%d", &b);
	printf("number is %d\n", a += b);

	printf("number for -:");
	scanf("%d", &b);
	printf("number is %d\n", a -= b);

	printf("number for *:");
	scanf("%d", &b);
	printf("number is %d\n", a *= b);

	printf("number for /:");
	scanf("%d", &b);
	printf("number is %d", a /= b);

	return 0;
}