#include <stdio.h>
#include <math.h>

int main()
{
	double x = 11.3;
	double a;

	a = (3 * pow(x, 3)) - (7 * pow(x, 2)) + 9;
	printf("x의 값이 %.1f일 때, 다항식의 값은 %.4f입니다.", x, a);

	return 0;
}