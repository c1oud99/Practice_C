#include <stdio.h>

int main(void)
{
	int x, y;
	int sum, diff, mul, div;

	x = 20;
	y = 10;

	sum = x + y;
	diff = x - y;
	mul = x * y;
	div = x / y;

	printf("�μ��� ��: %d\n", sum);
	printf("�μ��� ��: %d\n", diff);
	printf("�μ��� ��: %d\n", mul);
	printf("�μ��� ��: %d", div);

	return 0;
}