// ���� (��)�� : ����s
#include <stdio.h>

int main() {
	char a = 'A'; // ���� ����ǥ
	int arr[3] = { 1,2,3 };

	char carr[3] = { 'A', 'B', 'C' };
	//printf("%c", carr[1]);

	char sarr[10] = "ABC";
	// String name = "ABC";

	int result = 0;
	for (int i = 0; i < 10; i++) {
		if (sarr[i] == '\0') { // NULL
			result = i;
			printf("���ڴ� %d���Դϴ�.", i);
			break;
		}
		printf("sarr[%d] = %c\n", i, sarr[i]);
	}
	printf("���ڴ� %d���Դϴ�.", result);
	

	return 0;
}