#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>

int main(void)
{
	int ysalary;	// 연봉
	int msalary;	// 월수령액

	printf("연봉을 입력하시오: ");
	scanf("%d", &ysalary);

	msalary = ysalary / 12;

	printf("월수령액(단위:만원): %d", msalary);

	return 0;
}