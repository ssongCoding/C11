//#include <stdio.h>
//
//int main() {
//
//	int month;
//	scanf_s("%d", &month);
//
//	switch (month/3) {
//		case 0 :
//			printf("겨울입니다.");
//			break;
//		case 1:
//			printf("봄입니다.");
//			break;
//		case 2:
//			printf("여름입니다.");
//			break;
//		case 3:
//			printf("가을입니다.");
//			break;
//	}
//
//	if (month < 3) {
//		printf("겨울입니다.");
//	} else if (month <= 5) { // 가정 : 3 <= month 
//		printf("봄입니다.");
//	} else if (month <= 8) { // 가정 : 5 < month
//		printf("여름입니다.");
//	} else { // 가정 : 8 < month
//		printf("가을입니다.");
//	}
//
//	return 0;
//}
//
///*
//	if else문
//	int month (1~11)
//	scanf_s
//	1~2 : 겨울입니다. // 1, 2      -- 몫 : 0 
//	3~5 : 봄입니다.   // 3, 4, 5   -- 몫 : 1
//	6~8 : 여름입니다. // 6, 7, 8   -- 2
//	9~11 : 가을입니다.// 9, 10, 11 -- 3
//
//	--> 나누기 연산 + switch문
//	: ~13:10 (쉬는 시간 포함)
//*/