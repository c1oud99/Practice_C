#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	
	char a;
	printf("문자를 입력하세요: ");
	a = getchar();
	printf("%c의 아스키 코드는 %d 입니다.\n", a, a);

	int b;
	printf("아스키코드를 입력하세요: ");
	scanf("%d", &b);
	printf("아스키코드 %d번은 %c 입니다.", b, b);

	return 0;
}