#include <stdio.h>

#define PI 3.141592

int main() {

	double r;

	printf("원 반지름 입력: ");
	scanf("%lf", &r);
	printf("원 반지름: %lf\n", r);
	printf("원 면적: %lf\n", r*r*PI);
	printf("원 둘레: %lf\n", 2*r*PI);

	return 0;
}