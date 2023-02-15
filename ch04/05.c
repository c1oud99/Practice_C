#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	const double SQMETER_PER_PYEONG = 3.3058;
	double pyeong, meter;

	printf("평을 입력하세요: "); scanf("%lf", &pyeong);

	meter = SQMETER_PER_PYEONG * pyeong;
	
	printf("%lf평방미터입니다.", meter);

	return 0;
}