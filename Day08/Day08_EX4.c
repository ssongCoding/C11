#include <stdio.h>

void local() {
	int count = 1; // 메모리에 올려요
	printf("local 함수의 count는 %d\n", count++);
	// 1로 출력하고, 2
} // count가 메모리에서 사라져요

void staticLocal() {
	// 정적이다 = 안 움직임
	static int staticCount = 1;
	printf("staticLocal 함수의 staticCount는 %d\n", staticCount++);
} // static 변수는 메모리에서 안 사라져요.
  // 프로그램이 끝날 때까지.

int main() {

	staticLocal(); // 1
	staticLocal(); // 2
	staticLocal(); // 3

	local();

	return 0;
}