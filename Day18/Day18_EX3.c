#include <stdio.h>

int main() {
	int num, sum = 0;
	printf("정수(1~100) 중 1개를 입력하세요.\n");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) {
		// 예를 들어, num이 7이면 i는 1, 2, 3, 4, 5, 6, 7
		if (i % 2 == 0) { // i가 짝수이면 
						  // 1, 3, 5, 7 일 때는 안 들어간다는 거죠!
			sum = sum + i;// (이 일을 안 한다는 거에요!)
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
	1부터 그 수까지 짝수의 합을 구해보자.

	5 --> 2 + 4     = 6
	num   2   2+2 ...
	     1*2  2*2 ... 
	6 --> 2 + 4 + 6 = 12
	num   2  2+2 2+2+2
	     1*2 2*2 3*2 
*/