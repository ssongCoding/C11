/*
	ȸ��
*/
#include <stdio.h>
#include <string.h>

int main() {
	char arr[7];
	scanf_s("%s", arr, 7);

	int length = strlen(arr); // �Է¹��� ���ڼ�

	int count = 0;
	for (int i = 0; i < length / 2; i++) {
		if (arr[i] == arr[length - 1 - i]) {
			count++;
		}
	}

	if (count == length / 2) {
		printf("ȸ���Դϴ�.");
	} else {
		printf("ȸ���� �ƴմϴ�.");
	}

	return 0;
}