#include <stdio.h>

/*
	자료형(상자의 형태)의 크기
	int, double, char, 
	[], *
*/
int main() {

	int num1 = 5;
	printf("int의 사이즈 = %d\n", sizeof(num1)); // 4
	// %llu : unsigned long long

	double num2 = 3.0; // 실수를 담는 상자
	printf("double의 사이즈 = %d\n", sizeof(num2)); // 8

	char num3 = 'a';
	printf("char의 사이즈 = %d\n", sizeof(num3));

	int iarr[3];
	printf("iarr[ ]의 사이즈 = %d\n", sizeof(iarr)); // 3 * 4

	double darr[4];
	printf("darr[ ]의 사이즈 = %d\n", sizeof(darr)); // 4 * 8

	int* iptr = &num1; // 포인터 변수 = 포인터를 담는 상자 
	printf("iptr의 사이즈 = %d\n", sizeof(iptr)); // 8

	double* dptr = &num2; // 포인터 변수 = 포인터를 담는 상자
	printf("dptr의 사이즈 = %d\n", sizeof(dptr)); // 8

	return 0;
}