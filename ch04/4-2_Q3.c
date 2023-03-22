#include <stdio.h>
#pragma warning (disable:4996)

int main() {

	double const pyeong = 3.305785;
	double m;

	printf("평수 입력: ");
	scanf("%lf", &m);
	printf("입력된 평수: %f\n", m);
	printf("제곱미터: %f\n", m*pyeong);

	return 0;
}