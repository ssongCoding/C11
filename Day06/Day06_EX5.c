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

	/*�迭 arr 5ĭ¥���� �����ϰ�,
	songa.kim@kakao.com
	1��. for arr 0~4
		 for int i 1~5 (1,2,3,4,5)
			arr[0] = 1
			arr[1] = 2
			...
			arr[4] = 5

	2��. for�� �ϳ���
	*/
	return 0;
}