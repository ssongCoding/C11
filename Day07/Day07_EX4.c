#include <stdio.h>

int bigNum(int a, int b) {

	if (a > b) {
		return a;
	} else {
		return b;
	} 
}

int main() {

	int result;
	result = bigNum(7, 15);
	printf("%d", result);

	return 0;
}