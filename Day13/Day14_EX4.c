#include <stdio.h>

int main() {
	int num;

	while (1) { // 참
		scanf_s("%d", &num);

		if (num == -1) {
			break; // while문을 빠져나가게 해줄거
		}
	}

	return 0;
}