#include <stdio.h>

int main()
{
	int won = 37970;

	printf("%d����\n", won);
	printf("����¥�� %d��\n", won/10000);
	printf("��õ��¥�� %d��\n", (won % 10000) / 5000);
	printf("õ��¥�� %d��\n", (won % 5000) / 1000);
	printf("���¥�� %d��\n", (won % 1000) / 100);
	printf("�ʿ�¥�� %d���� �����˴ϴ�.", (won % 100) / 10);

	return 0;
}