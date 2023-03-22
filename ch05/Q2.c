#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:4996)

int main() {

	double x1, y1, x2, y2, Distance;

	printf("x1,y1:");
	scanf("%lf %lf", &x1, &y1);
	printf("x2,y2:");
	scanf("%lf %lf", &x2, &y2);

	Distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	printf("Distance:%.4lf", Distance);

	return 0;
}