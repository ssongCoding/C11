#include <stdio.h>

int global; // ���� ����
double globalD;

struct Struc { // ��Ʈ ���� �ڷ���
	int s;
	int ss;
};

int main() { // main �Լ�

	struct Struc S; // ��������

	int local;
	double localD = 0.0;

	printf("int global = %d\n", global);// 0
	//printf("%d\n", S.s); // ���� ������ �ʱ�ȭ�� �������� ����� �ؼ�
						   // ����
	//printf("%d", local); // ����

	printf("double globalD�� %%f�� ����ϸ� %f\n", globalD);
	printf("double globalD�� %%d�� ����ϸ� %d\n", globalD);
	printf("double localD�� %%f�� ����ϸ� %f\n", localD);
	printf("double localD�� %%d�� ����ϸ� %d\n", localD);

	printf("*********************************\n");

	scanf_s("%lf", &globalD); // 20.0
	//printf("globalD�� %%lf�� �Է¹����� %f\n", globalD); // 20.0
	//printf("globalD�� %%d�� �Է¹����� %d", globalD); //

	// ����ȯ
	// ���ϴ� �ڷ������� �ٲ� �� �ִ�.
	// (���ϴ� �ڷ���)����
	// ���, ū �� ->> ���� �� X
	printf("%d", (int)globalD);


	// printf("%f\n", localD); // ����

	return 0;
}