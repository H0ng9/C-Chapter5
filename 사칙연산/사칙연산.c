#include <stdio.h>
int main(void) {

	int num1 = 0, num2 = 0;

	printf("¼ıÀÚ 1 ÀÔ·Â"); scanf_s("%d", &num1);
	printf("¼ıÀÚ 2 ÀÔ·Â"); scanf_s("%d", &num2);

	printf("µ¡»ù Ãâ·Â : %d\n", num1 + num2);
	printf("–E»ù Ãâ·Â : %d\n", num1 - num2);
	printf("°ö»ù Ãâ·Â : %d\n", num1 * num2);
	printf("³ª´°»ù Ãâ·Â : %d\n", num1 / num2);
	return 0;
}