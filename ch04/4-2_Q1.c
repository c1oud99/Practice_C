#include <stdio.h>
#pragma warning (disable:4996)

int main() {

	int x, y;
	printf("���簢���� ù��° ���� ���̸� �Է��Ͻÿ�: ");
	scanf("%d", &x);

	printf("���簢���� �ι�° ���� ���̸� �Է��Ͻÿ�: ");
	scanf("%d", &y);

	printf("�Է¹��� �� ���� ���̴� %d, %d �Դϴ�.\n", x, y);
	printf("���簢���� �ѷ��� ���̴� %d �Դϴ�.\n", x + x + y + y);
	printf("���簢���� ���̴� %d �Դϴ�.", x * y);

	return 0;
}