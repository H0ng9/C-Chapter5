#include <stdio.h>
#include "function.h"

void p(const char* msg, int n) { // 함수의 정의
	printf(">>>>>>>>>\n");
	printf("%s 출력 : %d\n", msg, n);
	printf(">>>>>>>>>\n\n");
}

int showMenu(int n) {
	int input;
	printf("숫자 입력 : ", n); scanf_s("%d", &input);
	return input;
}