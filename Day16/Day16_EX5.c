#include <stdio.h>

int main() {
	int arr[26];

	for (int i = 0; i < 26; i++) {
		// 0   1  2   3 ... 26 : i
		// 97 98 99 100 ...    : i + 97
		arr[i] = i + 97;
		printf("%c\n", arr[i]);
	}

	return 0;
}