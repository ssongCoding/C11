#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "appleeeeeeee";
	char* str = "appleeeeeeee";
	
	/*** ���ڿ� ���̸� ������ �ִ� �Լ� ***/
	int result = strlen(str);
	for (int i = 0; i < 10; i++) { // ���ڿ� ���� ���ϴ� for��
		if (str[i] == '\0') { // null
			result = i;
		}
	}

	printf("result = %d\n", result);

	char c1[] = "apple";
	int c1_size = strlen(c1); // c1�� ���� : 5
	char c2[] = "apple";

	// c1�̶� c2�� ������, printf("�����ϴ�.");
	int cmpResult = strcmp(c1, c2); // ���� == 0, �ٸ��� == 1, -1
	printf("%d", cmpResult);
	

	/*if (c1 == c2) { --> �̰� �ȵ�
		printf("�����ϴ�.");
	}*/

	//int same = 0;
	//for (int i = 0; i < c1_size; i++) {
	//	if (c1[i] == c2[i]) {
	//		same = same + 1;
	//	}
	//}

	//if (same == c1_size) {
	//	printf("�����ϴ�.");
	//} else {
	//	printf("���� �ʽ��ϴ�.");
	//}

	return 0;
}