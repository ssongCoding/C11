//#include <stdio.h>
//
//int n = 5; // 전역
//
//int plus() {
//	static int count = 0;
//	count = count + 1;  // count++
//
//	return count;
//}
//
//int main() {
//
//	printf("%d\n", plus());  // 1
//	printf("%d\n", plus());  // 1 or 2
//
//	int num = 10; // 지역변수
//	printf("%d\n", num);
//
//	return 0;
//}