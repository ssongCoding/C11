#include <stdio.h> // 표준 입출력
#include <stdlib.h>// 표준 라이브러리

int main() {
	// for 0,1,2  : i    = 100, 200, 300
	//     1 2 3  : i+1
	//     100 200 300 : (i+1) * 100

	/*
		사용자에게 입력 받은 정수로 
		배열을 만들어 주.세.요
	*/

	int n;
	scanf_s("%d", &n); // 칸 수

	//int num[n]; // 컴퓨터가 할당 해줄 때
	int* num = malloc(n * sizeof(int)); // 할당

	for (int i = 0; i < n; i++) { // 0, 1, 2
		num[i] = (i + 1) * 100;

		//num[0] = (0 + 1) * 100 = 100
		//num[1] = (1 + 1) * 100 = 200
		//num[2] = (2 + 1) * 100 = 300

		printf("%d\n", num[i]);
	}

	free(num); // 메모리에서 사라질거에요.

	return 0;
}