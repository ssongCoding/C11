#include <stdio.h>

int main() {
	int arr[3];
	scanf_s("%d %d %d", &arr[0], &arr[1], &arr[2]);

	// ���� 3�� �� �ִ밪 ���ϴ� �� �츮 ��
	int max = arr[0];
	for (int i = 1; i < 3; i++) { // 1~2
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	printf("Max = %d", max);

	return 0;
}