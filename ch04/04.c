#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double w, h, d, b;

	printf("������ ���� ���� ���̸� �ѹ��� �Է�: ");
	scanf("%lf %lf %lf", &w, &h, &d);

	b = w * h * d;

	printf("������ ���Ǵ� %lf�Դϴ�.", b);

	return 0;
}