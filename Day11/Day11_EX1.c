// 문자 (배)열 : 문자s
#include <stdio.h>

int main() {
	char a = 'A'; // 작은 따옴표
	int arr[3] = { 1,2,3 };

	char carr[3] = { 'A', 'B', 'C' };
	//printf("%c", carr[1]);

	char sarr[10] = "ABC";
	// String name = "ABC";

	int result = 0;
	for (int i = 0; i < 10; i++) {
		if (sarr[i] == '\0') { // NULL
			result = i;
			printf("문자는 %d개입니다.", i);
			break;
		}
		printf("sarr[%d] = %c\n", i, sarr[i]);
	}
	printf("문자는 %d개입니다.", result);
	

	return 0;
}