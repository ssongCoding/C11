#include <stdio.h> // ǥ�� �����
#include <stdlib.h>// ǥ�� ���̺귯��

int main() {
	// for 0,1,2  : i    = 100, 200, 300
	//     1 2 3  : i+1
	//     100 200 300 : (i+1) * 100

	/*
		����ڿ��� �Է� ���� ������ 
		�迭�� ����� ��.��.��
	*/

	int n;
	scanf_s("%d", &n); // ĭ ��

	//int num[n]; // ��ǻ�Ͱ� �Ҵ� ���� ��
	int* num = malloc(n * sizeof(int)); // �Ҵ�

	for (int i = 0; i < n; i++) { // 0, 1, 2
		num[i] = (i + 1) * 100;

		//num[0] = (0 + 1) * 100 = 100
		//num[1] = (1 + 1) * 100 = 200
		//num[2] = (2 + 1) * 100 = 300

		printf("%d\n", num[i]);
	}

	free(num); // �޸𸮿��� ������ſ���.

	return 0;
}