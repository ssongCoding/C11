//#include <stdio.h>
//
//// ���� ������ �޸𸮿� �̸� �����ֿ�.
//int global = 10; // ���� ����
//
//// ��ǻ�Ͱ� �ִ����� �˾ƿ�. 
//// ������ ȣ���� ��, ����� �Ұſ���.
//void print() {
//	printf("%d", global); // 20
//}
//
//int main() { // <<<<<< ��ǻŸ�� ���α׷� ����/����
//	// 1�� 7�б���@
//	int local = 30; 
//
//	global = 20;
//	printf("%d", global); // 20
//	printf("%d", global);  // 30
//	print();              // 20
//
//	return 0;
//}