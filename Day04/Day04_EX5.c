#include<stdio.h>

int main(void) {

	// int, double, char

	char input;
	scanf_s("%c", &input);

	switch (input) {
		case 'Z' :
			printf("���� Z�Դϴ�.");
			break;
		case 'S' :
			printf("���� S�Դϴ�.");
			
		default : // case�� �ش� �ȵ� ��,
			printf("������ �ݰ����ϴ�.");
			break;
	}

	return 0;
}