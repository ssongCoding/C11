#include <stdio.h>

/*
	�Ӻ���� : �޴���, ��, ������, �ڵ���....
	           CCTV, ��ǳ��, ��ǻ��...
			 : �ڵ���
			   - ���� ���� ������ ������������
			     ����� �ɸ����?
				 1.10  2.20.  3.30  4.�ȵ�.
	"������"
*/
int main() {

	int a = 50;
	//scanf_s("%d", &a);
	
	a = 90;
	printf("a == %d\n", a);
	printf("&a == %p\n", &a);

	printf("\n***********************\n");

	int b = 20; // ������ ����
	printf("b == %d\n", b);
	printf("&b == %p\n", &b);

	int* bptr; // ������ ����
	bptr = &b;
	printf("bptr == %p\n", bptr);
	printf("*bptr == %d", *bptr);

	printf("\n***********************\n");

	int d = 200;
	int* dptr = &d;

	printf("%d", d); // 200
	printf("%p", dptr); // ������ �ּ�

	d = 500;
	printf("%d", d); // 500
	printf("%p", dptr); // �ּ�
	printf("%d", *dptr); // ���� �ȿ��� ������
	
	*dptr = 700;
	printf("%d", *dptr); // 700
	printf("%d", d);	// 700

	printf("\n***********************\n");
	int c[] = { 1,2,3,4,5 };
	printf("%d\n", sizeof(c)/sizeof(c[0]));
	printf("%d", sizeof(c) / sizeof(int));

	return 0;
}