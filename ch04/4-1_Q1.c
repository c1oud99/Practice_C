#include <stdio.h>

#define PI 3.14

int main()
{
	float r = 2.51;

	printf("원 반지름: %f\n", r);
	printf("원 면적: %f\n", r*r*PI);
	printf("원 둘레: %f", 2*PI*r);

	return 0;
}