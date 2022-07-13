#include <stdio.h>

int main() {

	int arr[5];
	for (int i = 0; i < 5; i++) { // 0,1,2,3,4
		for (int j = 1; j <= 5; j++) { //  1,2,3,4,5
			if (j == i + 1) {
				arr[i] = j;
			}			
		}
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	for (int k = 0; k < 5; k++) {
		arr[k] = k + 1;
		printf("arr[%d] = %d\n", k, arr[k]);
	}

	/*배열 arr 5칸짜리를 선언하고,
	songa.kim@kakao.com
	1번. for arr 0~4
		 for int i 1~5 (1,2,3,4,5)
			arr[0] = 1
			arr[1] = 2
			...
			arr[4] = 5

	2번. for문 하나로
	*/
	return 0;
}