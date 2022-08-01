#include <iostream>
#include <string>
using namespace std;

class Coffee {
	private: // �ۿ��� ���� �ȵǼ�
		string order; // �ֹ����� �޴� �̸� ex. �ƾ�
	public:
		Coffee(string o); // ������ : setOrder�� ��� �ϴ� ���� ����
		void setOrder(string o); // �ֹ� �޾Ƽ� �޴� �̸� ����
		string getOrder(); // �޴� �̸� ��ȯ
};

Coffee::Coffee(string o) { // ������
	order = o;
}

string Coffee::getOrder() {
	return order;
}

void Coffee::setOrder(string o) {
	order = o;
}

int main() {
	string name;
	cout << "� Ŀ�Ǹ� �ֹ��Ͻðھ��?";
	getline(cin, name); // name ������ �Է°��� ��
	// �Է� : ex. �Ƹ޸�ī��

	string temp;
	cout << "���̽��� �帱��� ������ �帱���?";
	getline(cin, temp);
	// �Է� : ex. ���̽�

	Coffee orderedCoffee(temp + name); // ��ü ����
	//orderedCoffee.setOrder(temp + name); // ���̽��Ƹ޸�ī��
	
	cout << "�ֹ��Ͻ� " << orderedCoffee.getOrder()
			<< "���Խ��ϴ�.";
	// ��� : �ֹ��Ͻ� ���̽��Ƹ޸�ī�� ���Խ��ϴ�.
}