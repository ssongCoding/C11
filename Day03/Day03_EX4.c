#include <stdio.h>

int main(void) {

	//char ca;

	//scanf_s("%c", &ca);
	//printf("%c", ca);
	/*
	* ���ڸ� �޴� ���� c �ʱ�ȭ X
	* scanf_s : ���ĺ� �ϳ��� �� �� �־��
	* printf();
	* 
	* �ð� : ~37��
	*/

	int a, b;
	char c;

	scanf_s("%d %d %c", &a, &b, &c); // ���� 2��, char 1��
	printf("%d %d %c", a, b, c); // ���� 2��, char 1��

	return 0;
}