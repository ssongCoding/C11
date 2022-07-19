#include <stdio.h>

/*
	임베디드 : 휴대폰, 빔, 에어컨, 자동문....
	           CCTV, 선풍기, 컴퓨터...
			 : 자동차
			   - 완전 자율 주행이 가능해지려면
			     몇년이 걸릴까요?
				 1.10  2.20.  3.30  4.안됨.
	"포인터"
*/
int main() {

	int a = 50;
	//scanf_s("%d", &a);
	
	a = 90;
	printf("a == %d\n", a);
	printf("&a == %p\n", &a);

	printf("\n***********************\n");

	int b = 20; // 정수형 변수
	printf("b == %d\n", b);
	printf("&b == %p\n", &b);

	int* bptr; // 포인터 변수
	bptr = &b;
	printf("bptr == %p\n", bptr);
	printf("*bptr == %d", *bptr);

	printf("\n***********************\n");

	int d = 200;
	int* dptr = &d;

	printf("%d", d); // 200
	printf("%p", dptr); // 상자의 주소

	d = 500;
	printf("%d", d); // 500
	printf("%p", dptr); // 주소
	printf("%d", *dptr); // 상자 안에꺼 꺼내면
	
	*dptr = 700;
	printf("%d", *dptr); // 700
	printf("%d", d);	// 700

	printf("\n***********************\n");
	int c[] = { 1,2,3,4,5 };
	printf("%d\n", sizeof(c)/sizeof(c[0]));
	printf("%d", sizeof(c) / sizeof(int));

	return 0;
}