#include <stdio.h>

void local() {
	int count = 1; // �޸𸮿� �÷���
	printf("local �Լ��� count�� %d\n", count++);
	// 1�� ����ϰ�, 2
} // count�� �޸𸮿��� �������

void staticLocal() {
	// �����̴� = �� ������
	static int staticCount = 1;
	printf("staticLocal �Լ��� staticCount�� %d\n", staticCount++);
} // static ������ �޸𸮿��� �� �������.
  // ���α׷��� ���� ������.

int main() {

	staticLocal(); // 1
	staticLocal(); // 2
	staticLocal(); // 3

	local();

	return 0;
}