#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int main(void)
{
	float x, y, z, sum, arg;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%f", &x);
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%f", &y);
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%f", &z);

	sum = x + y + z;
	arg = sum / 3.0;

	printf("���� %f�̰� ����� %f�Դϴ�.", sum, arg);

	return 0;
}