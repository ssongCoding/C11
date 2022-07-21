#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "appleeeeeeee";
	char* str = "appleeeeeeee";
	
	/*** 문자열 길이를 가져다 주는 함수 ***/
	int result = strlen(str);
	for (int i = 0; i < 10; i++) { // 문자열 길이 구하는 for문
		if (str[i] == '\0') { // null
			result = i;
		}
	}

	printf("result = %d\n", result);

	char c1[] = "apple";
	int c1_size = strlen(c1); // c1의 길이 : 5
	char c2[] = "apple";

	// c1이랑 c2가 같으면, printf("같습니다.");
	int cmpResult = strcmp(c1, c2); // 같다 == 0, 다르면 == 1, -1
	printf("%d", cmpResult);
	

	/*if (c1 == c2) { --> 이거 안됨
		printf("같습니다.");
	}*/

	//int same = 0;
	//for (int i = 0; i < c1_size; i++) {
	//	if (c1[i] == c2[i]) {
	//		same = same + 1;
	//	}
	//}

	//if (same == c1_size) {
	//	printf("같습니다.");
	//} else {
	//	printf("같지 않습니다.");
	//}

	return 0;
}