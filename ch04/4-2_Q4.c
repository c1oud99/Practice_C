#include <stdio.h>

int main() {
	
	int a, b;

	printf("a와 b를 입력하시오 :  ");
	scanf("%d , %d", &a, &b);
	printf("a+b=%d\n", a + b);
	printf("a-b=%d\n", a - b);
	printf("a*b=%d\n", a * b);
	printf("a/b=%.2f", (double)a / b);
	
	return 0;
}