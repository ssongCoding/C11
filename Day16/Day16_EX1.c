#include <stdio.h>

/*
	�ڷ���(������ ����)�� ũ��
	int, double, char, 
	[], *
*/
int main() {

	int num1 = 5;
	printf("int�� ������ = %d\n", sizeof(num1)); // 4
	// %llu : unsigned long long

	double num2 = 3.0; // �Ǽ��� ��� ����
	printf("double�� ������ = %d\n", sizeof(num2)); // 8

	char num3 = 'a';
	printf("char�� ������ = %d\n", sizeof(num3));

	int iarr[3];
	printf("iarr[ ]�� ������ = %d\n", sizeof(iarr)); // 3 * 4

	double darr[4];
	printf("darr[ ]�� ������ = %d\n", sizeof(darr)); // 4 * 8

	int* iptr = &num1; // ������ ���� = �����͸� ��� ���� 
	printf("iptr�� ������ = %d\n", sizeof(iptr)); // 8

	double* dptr = &num2; // ������ ���� = �����͸� ��� ����
	printf("dptr�� ������ = %d\n", sizeof(dptr)); // 8

	return 0;
}