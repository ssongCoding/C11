#include <stdio.h>

int main() {
	int num;

	while (1) { // ��
		scanf_s("%d", &num);

		if (num == -1) {
			break; // while���� ���������� ���ٰ�
		}
	}

	return 0;
}