#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:4996)

int main() {

	double x1, x2, a, b, c;

	printf("a,b,c:");
	scanf("%lf,%lf,%lf", &a, &b, &c);

	x1 = (-b + (sqrt(pow(b, 2) - 4 * a * c))) / (2 * a);
	x2 = (-b - (sqrt(pow(b, 2) - 4 * a * c))) / (2 * a);

	printf("x=%lf, %lf", x1, x2);

	return 0;
}