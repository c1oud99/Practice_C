#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float data;
	printf("실수를 입력하시오: ");
	scanf("%f", &data);

	printf("실수형식으로는 %f입니다.\n", data);
	printf("지수형식으로는 %e입니다.", data);

	return 0;
}