#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	
	char a;
	printf("���ڸ� �Է��ϼ���: ");
	a = getchar();
	printf("%c�� �ƽ�Ű �ڵ�� %d �Դϴ�.\n", a, a);

	int b;
	printf("�ƽ�Ű�ڵ带 �Է��ϼ���: ");
	scanf("%d", &b);
	printf("�ƽ�Ű�ڵ� %d���� %c �Դϴ�.", b, b);

	return 0;
}