#include <iostream>

// ~ 12:18���� ���� �ð� �Դϴ� :)
class Book { // ��ü�� ����� ���� Ŭ����
	// Ŭ���� �ۿ��� ������ �ȵǴ� ����
	private: // ���� ����
		int totalPage; // ��ü ������
		int readPage; // ���� ������ (�� ��)
	public: // �ۿ��� ���� ����
		void setTotalPage(int tp);
		int getTotalPage();
};

// setter : private ���� ���� ���� �Լ�
void Book::setTotalPage(int tp) {
	totalPage = tp;
}

// getter : private ���� ���� �����ִ� �Լ�
int Book::getTotalPage() {
	return totalPage;
}


int main() {
	Student
	Book littlePrince;
	littlePrince.setTotalPage(100);
	printf("%d", littlePrince.getTotalPage());

	return 0;
}
/*
	main
	Book littlePrince
	// �� ������ ��, ���� ������ �Է�
	// ��� : ������� �� ������ ���� 00 �������̰�,
			  ���� 00���������� �о����ϴ�.
			  ���� 00% �о��׿�. - �����θ�
	Book momo
	// �� ������ ��, ���� ������ �Է�
	// ��� : ����� �� ������ ���� 00 �������̰�,
			  ���� 00���������� �о����ϴ�.
			  ���� 00% �о��׿�.
*/