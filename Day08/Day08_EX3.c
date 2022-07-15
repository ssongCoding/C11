//#include <stdio.h>
//
//// 전역 변수는 메모리에 미리 만들어둬요.
//int global = 10; // 전역 변수
//
//// 컴퓨터가 있는지만 알아요. 
//// 누군가 호출할 때, 기능을 할거에요.
//void print() {
//	printf("%d", global); // 20
//}
//
//int main() { // <<<<<< 콤퓨타가 프로그램 시작/종료
//	// 1시 7분까지@
//	int local = 30; 
//
//	global = 20;
//	printf("%d", global); // 20
//	printf("%d", global);  // 30
//	print();              // 20
//
//	return 0;
//}