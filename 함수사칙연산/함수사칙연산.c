#include <stdio.h>


void p(const char*, int); // ÇÔ¼öÀÇ ¼±¾ğ
int showMenu(int);

int main(void) {

	
	int num1 = 0, num2 = 0;



	num1 = showMenu(1);
	num2 = showMenu(2);


	//»çÄ¢¿¬»ê Ãâ·Â
	p("µ¡¼À", num1 + num2);
	p("»¬¼À", num1 - num2);
	p("°ö¼À", num1 * num2);
	p("³ª´°¼À", num1 / num2);

	
	return 0;
}

