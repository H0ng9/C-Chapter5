#include <stdio.h>


void p(const char*, int); // �Լ��� ����
int showMenu(int);

int main(void) {

	
	int num1 = 0, num2 = 0;



	num1 = showMenu(1);
	num2 = showMenu(2);


	//��Ģ���� ���
	p("����", num1 + num2);
	p("����", num1 - num2);
	p("����", num1 * num2);
	p("������", num1 / num2);

	
	return 0;
}

