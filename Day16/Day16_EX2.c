#include <stdio.h>

int sum(int num[], int arrNum) { // �迭�� �̸� = �迭�� �ּ�
	    // int num[] = arr;
		// int* num = arr; --> ������ �����ϱ� 8
	int result = 0;

	printf("num�� %dĭ\n", sizeof(num) / sizeof(int));
	for (int i = 0; i < arrNum; i++) {
		result = result + num[i];
	}

	return result;
}

int main() {
	int arr[] = { 2, 4, 10};
	// ��ĭ? �迭 ��ü ���� / �迭 ��ĭ ����
	// 12 / 4 = 3
	int arrSize = sizeof(arr) / sizeof(int);
	printf("arr�� %dĭ\n", sizeof(arr) / sizeof(int));

	printf("%d", sum(arr, arrSize)); // 16
	return 0;
}