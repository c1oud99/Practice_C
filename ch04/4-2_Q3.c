#include <stdio.h>
#pragma warning (disable:4996)

int main() {

	double const pyeong = 3.305785;
	double m;

	printf("��� �Է�: ");
	scanf("%lf", &m);
	printf("�Էµ� ���: %f\n", m);
	printf("��������: %f\n", m*pyeong);

	return 0;
}