#include <stdio.h>

int main() {
	char sarr[] = "banana";
	// banana를 역순 출력
	// 제한시간 : 5분~~

	// 문자열의 길이를 구하는 for문
	int result = 0;
	for (int i = 0; i < 10; i++) {
		if (sarr[i] == '\0') { // NULL
			result = i;
		}
	}

	for (int j = result - 1; j >= 0; j--) {
		printf("sarr[%d] = %c\n", j, sarr[j]);
	}

	return 0;
}