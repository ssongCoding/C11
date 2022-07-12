#include <stdio.h>

int main(void) {

	int num = 1;

	while (num < 3) { // 달릴 조건 확인
		printf("달립니다.");
		num++;
	}

	// i, j, k, l, m, n ...
	for (int i = 1 ; i < 3; i++) {
		printf("달립니다.");
	}

	return 0;
}