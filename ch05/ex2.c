#include <stdio.h>

int main() {
	int m, n;
	m = n = 3;
	
	m = ++m * m--;

	printf("%d\n\n", m);
	printf("m++ ++n : %d %d\n", m++, ++n);
	printf("m n : %d %d\n", m, n);
	printf("m-- --n : %d %d\n", m--, --n);
	printf("m n : %d %d", m, n);

	return 0;
}