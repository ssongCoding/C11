#include <stdio.h>

int main(void) {

	//char ca;

	//scanf_s("%c", &ca);
	//printf("%c", ca);
	/*
	* 문자를 받는 변수 c 초기화 X
	* scanf_s : 알파벳 하나만 들어갈 수 있어요
	* printf();
	* 
	* 시간 : ~37분
	*/

	int a, b;
	char c;

	scanf_s("%d %d %c", &a, &b, &c); // 정수 2개, char 1개
	printf("%d %d %c", a, b, c); // 정수 2개, char 1개

	return 0;
}