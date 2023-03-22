#include <stdio.h>

int main(void) {

	int a, b, c;
	a = b = c = 5;

	printf("a = a + 2 ¡æ %d\n", a = a + 2);
	printf("a ¡æ %d\n\n", a);
	printf("a = b + c ¡æ %d\n", a = b + c);
	printf("a ¡æ %d", a);

	return 0;
}