#include <stdio.h>

int main() {
	int arr[3];
	scanf_s("%d %d %d", &arr[0], &arr[1], &arr[2]);

	// 정수 3개 중 최대값 구하는 게 우리 일
	int max = arr[0];
	for (int i = 1; i < 3; i++) { // 1~2
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	printf("Max = %d", max);

	return 0;
}