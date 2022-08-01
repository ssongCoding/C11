#include <stdio.h>

int global; // 전역 변수
double globalD;

struct Struc { // 세트 변수 자료형
	int s;
	int ss;
};

int main() { // main 함수

	struct Struc S; // 지역변수

	int local;
	double localD = 0.0;

	printf("int global = %d\n", global);// 0
	//printf("%d\n", S.s); // 지역 변수는 초기화를 내손으로 해줘야 해서
						   // 오류
	//printf("%d", local); // 오류

	printf("double globalD를 %%f로 출력하면 %f\n", globalD);
	printf("double globalD를 %%d로 출력하면 %d\n", globalD);
	printf("double localD를 %%f로 출력하면 %f\n", localD);
	printf("double localD를 %%d로 출력하면 %d\n", localD);

	printf("*********************************\n");

	scanf_s("%lf", &globalD); // 20.0
	//printf("globalD에 %%lf로 입력받으면 %f\n", globalD); // 20.0
	//printf("globalD에 %%d로 입력받으면 %d", globalD); //

	// 형변환
	// 원하는 자료형으로 바꿀 수 있다.
	// (원하는 자료형)변수
	// 대신, 큰 값 ->> 작은 값 X
	printf("%d", (int)globalD);


	// printf("%f\n", localD); // 오류

	return 0;
}