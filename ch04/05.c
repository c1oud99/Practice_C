#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	const double SQMETER_PER_PYEONG = 3.3058;
	double pyeong, meter;

	printf("���� �Է��ϼ���: "); scanf("%lf", &pyeong);

	meter = SQMETER_PER_PYEONG * pyeong;
	
	printf("%lf�������Դϴ�.", meter);

	return 0;
}