//#include <stdio.h>
//
///*
//	����������!
//*/
//int main(void) {
//
//	int n = 10; // 10
//	n = n + 1;  // 11
//	printf("%d\n", n); // 11
//
//	printf("%d\n", n++); // 11
//	printf("%d\n", n);   // 12
//
//	printf("******************\n");
//
//	printf("%d\n", ++n); // 13
//
//	printf("******************\n");
//	printf("******************\n");
//
//	int m = 7;
//	m++;
//	printf("%d\n", m);    // 8
//	printf("%d\n", m++);  // 8�� ���ϰ�, 9 ����
//	printf("%d\n", ++m);  // 10
//	printf("%d\n", m++);  // 10�� ���ϰ�, 11�� �Ȱ���
//
//	printf("******************\n");
//	
//	printf("%d\n", m++); // 11
//	printf("%d\n", m++); // 12
//	printf("%d\n", m++); // 13
//	printf("%d\n", m++); // 14 -> 15
//
//	printf("%d\n", ++m); // 16
//	printf("%d\n", --m); // 15
//
//	return 0;
//}