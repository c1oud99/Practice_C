#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float data;
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%f", &data);

	printf("�Ǽ��������δ� %f�Դϴ�.\n", data);
	printf("�����������δ� %e�Դϴ�.", data);

	return 0;
}