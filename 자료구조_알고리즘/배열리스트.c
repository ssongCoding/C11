#include <stdio.h> // �⺻ �����

typedef struct { // �ڷᱸ�� : �迭����Ʈ
	int list[5]; // 5ĭ ����Ʈ ����
	int size; // ���� ����
} ArrayList;

// �ʱ�ȭ
void init(ArrayList* L) {
	L->size = 0; // ���� ���� 0���� ����
				 // �츰 ���� �����̴�!
	// �ּҰ��� �޾Ƽ�, ���� �� �ȿ� ���� �����Ϸ���
	// *L �̷��� ����ߴµ�
	// ����� �Ѱſ���. �׳� L�� ���� -> �� ���� ����
	// C�� �˾Ƽ� �ؼ����ְڴٰ�.
}

// ������� Ȯ��
int isEmpty(ArrayList* L) { // ��� �׳� ArrayList �޾Ƶ� �Ǵµ�
							// ���ϰ� �ַ���
	if (L->size == 0) { // �������,
						// = ���Ұ� 0���󱸿�
		return 1;		// true
	} else {
		return 0;		// false
	}
}

// �� á����
int isFull(ArrayList* L) {
	if (L->size == 5) {
		return 1;
	} else {
		return 0;
	}
}

int main() {

	ArrayList arrlist;

	return 0;
}