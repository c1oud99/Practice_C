#include <stdio.h>

#define PI 3.141592

int main() {

	double r;

	printf("�� ������ �Է�: ");
	scanf("%lf", &r);
	printf("�� ������: %lf\n", r);
	printf("�� ����: %lf\n", r*r*PI);
	printf("�� �ѷ�: %lf\n", 2*r*PI);

	return 0;
}