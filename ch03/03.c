#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float base, height, area;

	printf("»ï°¢ÇüÀÇ ¹Øº¯: ");
	scanf("%f", &base);
	printf("»ï°¢ÇüÀÇ ³ôÀÌ: ");
	scanf("%f", &height);

	area = base * height * 0.5;
	printf("»ï°¢ÇüÀÇ ³ĞÀÌ: %f", area);

	return 0;
}