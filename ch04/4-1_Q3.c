#include <stdio.h>
#include <math.h>

int main()
{
	double x = 11.3;
	double a;

	a = (3 * pow(x, 3)) - (7 * pow(x, 2)) + 9;
	printf("x�� ���� %.1f�� ��, ���׽��� ���� %.4f�Դϴ�.", x, a);

	return 0;
}