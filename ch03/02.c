#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float mile, meter;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%f", &mile);

	meter = mile * 1609;
	printf("%0.1f������ %f�����Դϴ�.", mile, meter);

	return 0;
}