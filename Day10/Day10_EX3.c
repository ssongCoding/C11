/*
	두 수를 매개변수로 전달했을 때,
	두 수를 바꿔서 출력하는 함수
*/

#include <stdio.h>

void changenum(int* n1, int* n2) { // 지역 변수
	int temp = *n1; // temp = 30;
	*n1 = *n2;      // num1 = num2
	*n2 = temp;     // num2 = temp;

	//printf("num1 = %d, num2 = %d", n1, n2); -- 1번 방법!
}

int main() {
	int num1 = 30;
	int num2 = 50;

	changenum(&num1, &num2); // 주소값을 줬어요.
							 // call by reference
	// n1 = &num1, n2 = &num2
	// n1 = 30, n2 = 50
	// call by value(값)

	printf("num1 = %d, num2 = %d\n", num1, num2);

	//int num3 = 100;
	//int num4 = 1000;

	//temp = num3;	// temp = 100;
	//num3 = num4;	// num3 = 1000;
	//num4 = temp;	// num4 = 100;
	//printf("num3 = %d, num4 = %d\n", num3, num4);

	return 0;
}