/*
	�� ���� �Ű������� �������� ��,
	�� ���� �ٲ㼭 ����ϴ� �Լ�
*/

#include <stdio.h>

void changenum(int* n1, int* n2) { // ���� ����
	int temp = *n1; // temp = 30;
	*n1 = *n2;      // num1 = num2
	*n2 = temp;     // num2 = temp;

	//printf("num1 = %d, num2 = %d", n1, n2); -- 1�� ���!
}

int main() {
	int num1 = 30;
	int num2 = 50;

	changenum(&num1, &num2); // �ּҰ��� ����.
							 // call by reference
	// n1 = &num1, n2 = &num2
	// n1 = 30, n2 = 50
	// call by value(��)

	printf("num1 = %d, num2 = %d\n", num1, num2);

	//int num3 = 100;
	//int num4 = 1000;

	//temp = num3;	// temp = 100;
	//num3 = num4;	// num3 = 1000;
	//num4 = temp;	// num4 = 100;
	//printf("num3 = %d, num4 = %d\n", num3, num4);

	return 0;
}