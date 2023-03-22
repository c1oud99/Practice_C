#include <stdio.h>
#pragma warning (disable:4996)

int main() {

	int x, y;
	printf("직사각형의 첫번째 변의 길이를 입력하시오: ");
	scanf("%d", &x);

	printf("직사각형의 두번째 변의 길이를 입력하시오: ");
	scanf("%d", &y);

	printf("입력받은 두 변의 길이는 %d, %d 입니다.\n", x, y);
	printf("직사각형의 둘레의 길이는 %d 입니다.\n", x + x + y + y);
	printf("직사각형의 넓이는 %d 입니다.", x * y);

	return 0;
}