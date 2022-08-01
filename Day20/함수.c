//#include <stdio.h>
//
//int plus(int, int); //  함수 (원형) 선언 분리
//// int plus(int, int, int); 
//// 같은 이름, 다른 매개변수 (개수, 자료형 등) 함수 사용 X
//
//int main() {
//	int result = plus(1, 2, 4); // 매개변수 개수보다
//							    // 많이 던지면, 남는 건 버림
//	printf("%d", result);
//
//	return 0; // 프로그램 종료
//}
//
//int plus(int a, int b) {
//	return a + b;
//}
//
//// 이거 안됨
//int plus(int a, int b, int c) {
//	return a + b + c;
//}