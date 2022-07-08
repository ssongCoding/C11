#include <stdio.h>

int main(void) {

	int a = 3;
	double b = 3.14;
	char c = 'A';

	printf("a는 %d입니다.\n", a);
				// %d : decimal 
	printf("b는 %0.2f입니다.\n", b);
	printf("c는 %c입니다.", c);

	return 0;
}