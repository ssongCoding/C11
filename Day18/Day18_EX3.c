#include <stdio.h>

int main() {
	int num, sum = 0;
	printf("����(1~100) �� 1���� �Է��ϼ���.\n");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) {
		// ���� ���, num�� 7�̸� i�� 1, 2, 3, 4, 5, 6, 7
		if (i % 2 == 0) { // i�� ¦���̸� 
						  // 1, 3, 5, 7 �� ���� �� ���ٴ� ����!
			sum = sum + i;// (�� ���� �� �Ѵٴ� �ſ���!)
		}
	}

	/*for (int i = 1; i * 2 <= num; i++) {
		sum = sum + i * 2;
	}*/

	for (int i = 1; i <= num; i = i+2) {
		// 1 3 5 7 9 11 13 15 ...  <= num
		sum = sum + i;
	}

	for (int i = 2; i <= num; i = i + 2) {
		// 1 3 5 7 9 11 13 15 ...  <= num
		// 2 4 6 8 10 12 ... <= num
		sum = sum + i;
	}

	printf("%d", sum);

	return 0;
}
/*
	1���� �� ������ ¦���� ���� ���غ���.

	5 --> 2 + 4     = 6
	num   2   2+2 ...
	     1*2  2*2 ... 
	6 --> 2 + 4 + 6 = 12
	num   2  2+2 2+2+2
	     1*2 2*2 3*2 
*/