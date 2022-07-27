#include <stdio.h>

int sum(int num[], int arrNum) { // 배열의 이름 = 배열의 주소
	    // int num[] = arr;
		// int* num = arr; --> 포인터 변수니까 8
	int result = 0;

	printf("num은 %d칸\n", sizeof(num) / sizeof(int));
	for (int i = 0; i < arrNum; i++) {
		result = result + num[i];
	}

	return result;
}

int main() {
	int arr[] = { 2, 4, 10};
	// 몇칸? 배열 전체 길이 / 배열 한칸 길이
	// 12 / 4 = 3
	int arrSize = sizeof(arr) / sizeof(int);
	printf("arr는 %d칸\n", sizeof(arr) / sizeof(int));

	printf("%d", sum(arr, arrSize)); // 16
	return 0;
}