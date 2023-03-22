#include <stdio.h>

int main()
{
	int won = 37970;

	printf("%d원은\n", won);
	printf("만원짜리 %d개\n", won/10000);
	printf("오천원짜리 %d개\n", (won % 10000) / 5000);
	printf("천원짜리 %d개\n", (won % 5000) / 1000);
	printf("백원짜리 %d개\n", (won % 1000) / 100);
	printf("십원짜리 %d개로 구성됩니다.", (won % 100) / 10);

	return 0;
}