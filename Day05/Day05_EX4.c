/*
	3, 6, 9, 12, ... 99까지 출력
	제한시간 : 5분 ~13:40
*/

#include <stdio.h>

int main(void) {

	for (int i = 1; i*3 < 100; i++) {
		printf("%d ", i*3);
	}
	return 0;
}