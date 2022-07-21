#include <stdio.h>

int main() {
	int arr[3] = { 100, 200, 300 };

	int arr2[3] = { 100, 200, 300 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[1]);
	printf("%p\n", &arr[2]);

	// 포인터 = 변수(상자)의 주소
	int num = 10;
	int* nptr = &num;
	printf("%p", nptr);

	return 0;
}