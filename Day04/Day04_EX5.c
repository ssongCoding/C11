#include<stdio.h>

int main(void) {

	// int, double, char

	char input;
	scanf_s("%c", &input);

	switch (input) {
		case 'Z' :
			printf("저는 Z입니다.");
			break;
		case 'S' :
			printf("저는 S입니다.");
			
		default : // case에 해당 안될 때,
			printf("만나서 반갑습니다.");
			break;
	}

	return 0;
}