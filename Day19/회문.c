/*
	회문
*/
#include <stdio.h>
#include <string.h>

int main() {
	char arr[7];
	scanf_s("%s", arr, 7);

	int length = strlen(arr); // 입력받은 글자수

	int count = 0;
	for (int i = 0; i < length / 2; i++) {
		if (arr[i] == arr[length - 1 - i]) {
			count++;
		}
	}

	if (count == length / 2) {
		printf("회문입니다.");
	} else {
		printf("회문이 아닙니다.");
	}

	return 0;
}