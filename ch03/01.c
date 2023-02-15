#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int main(void)
{
	float x, y, z, sum, arg;

	printf("실수를 입력하시오: ");
	scanf("%f", &x);
	printf("실수를 입력하시오: ");
	scanf("%f", &y);
	printf("실수를 입력하시오: ");
	scanf("%f", &z);

	sum = x + y + z;
	arg = sum / 3.0;

	printf("합은 %f이고 평균은 %f입니다.", sum, arg);

	return 0;
}