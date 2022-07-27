#include <stdio.h>

void changeNum(int* k) {
	*k = 5;
}

int main() {

	int n = 3;
	changeNum(&n);   // k = nÀÇ À§Ä¡
	printf("%d", n); // 3 -> 5

	return 0;
}