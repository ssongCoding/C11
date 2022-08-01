#include <iostream>
#include <string>
using namespace std;

class Coffee {
	private: // 밖에서 접근 안되서
		string order; // 주문받은 메뉴 이름 ex. 아아
	public:
		Coffee(string o); // 생성자 : setOrder랑 사실 하는 일이 같음
		void setOrder(string o); // 주문 받아서 메뉴 이름 셋팅
		string getOrder(); // 메뉴 이름 반환
};

Coffee::Coffee(string o) { // 생성자
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
	cout << "어떤 커피를 주문하시겠어요?";
	getline(cin, name); // name 변수에 입력값이 들어감
	// 입력 : ex. 아메리카노

	string temp;
	cout << "아이스로 드릴까요 핫으로 드릴까요?";
	getline(cin, temp);
	// 입력 : ex. 아이스

	Coffee orderedCoffee(temp + name); // 객체 선언
	//orderedCoffee.setOrder(temp + name); // 아이스아메리카노
	
	cout << "주문하신 " << orderedCoffee.getOrder()
			<< "나왔습니다.";
	// 출력 : 주문하신 아이스아메리카노 나왔습니다.
}