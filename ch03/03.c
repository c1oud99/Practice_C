#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float base, height, area;

	printf("�ﰢ���� �غ�: ");
	scanf("%f", &base);
	printf("�ﰢ���� ����: ");
	scanf("%f", &height);

	area = base * height * 0.5;
	printf("�ﰢ���� ����: %f", area);

	return 0;
}