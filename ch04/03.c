#include <stdio.h>

int main(void)
{
	int x = 10, y = 20, tmp = 0;
	
	printf("x=%d y=%d\n", x, y);

	tmp = x;
	x = y;

	printf("x=%d y=%d", x, tmp);

	return 0;
}