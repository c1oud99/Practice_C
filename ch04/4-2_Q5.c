#include <stdio.h>
#pragma warning (disable:4996)

int main(){

	int won;
	
	scanf("%d", &won);
	
	printf("money?>%d\n", won);
	printf("10000:%d\n", won / 10000);
	printf("5000:%d\n", (won % 10000) / 5000);
	printf("1000:%d\n", (won % 5000) / 1000);
	printf("500:%d\n", (won % 1000) / 500);
	printf("100:%d\n", (won % 500) / 100);
	printf("50:%d\n", (won % 100) / 50);
	printf("10:%d\n", (won % 50) / 10);
	printf("5:%d\n", (won % 10) / 5);
	printf("1:%d", (won % 5) / 1);

	return 0;
}