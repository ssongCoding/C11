//#include <stdio.h>
//
//int main() {
//
//	int month;
//	scanf_s("%d", &month);
//
//	switch (month/3) {
//		case 0 :
//			printf("�ܿ��Դϴ�.");
//			break;
//		case 1:
//			printf("���Դϴ�.");
//			break;
//		case 2:
//			printf("�����Դϴ�.");
//			break;
//		case 3:
//			printf("�����Դϴ�.");
//			break;
//	}
//
//	if (month < 3) {
//		printf("�ܿ��Դϴ�.");
//	} else if (month <= 5) { // ���� : 3 <= month 
//		printf("���Դϴ�.");
//	} else if (month <= 8) { // ���� : 5 < month
//		printf("�����Դϴ�.");
//	} else { // ���� : 8 < month
//		printf("�����Դϴ�.");
//	}
//
//	return 0;
//}
//
///*
//	if else��
//	int month (1~11)
//	scanf_s
//	1~2 : �ܿ��Դϴ�. // 1, 2      -- �� : 0 
//	3~5 : ���Դϴ�.   // 3, 4, 5   -- �� : 1
//	6~8 : �����Դϴ�. // 6, 7, 8   -- 2
//	9~11 : �����Դϴ�.// 9, 10, 11 -- 3
//
//	--> ������ ���� + switch��
//	: ~13:10 (���� �ð� ����)
//*/