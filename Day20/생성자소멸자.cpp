#include <iostream>
#include <string>
using namespace std;

class Coffee {
	private: // 밖에서 접근 안되서
		string order; // 주문받은 메뉴 이름 ex. 아아
		/**** 수업시간엔 하지 않은 shot ***/
		int shot = 3; // 샷 개수
	public:
		Coffee(string o); // 생성자 : setOrder랑 사실 하는 일이 같음
		~Coffee(); // 소멸자
		void setOrder(string o); // 주문 받아서 메뉴 이름 셋팅
		string getOrder(); // 메뉴 이름 반환
		int getShot(); // 샷 개수 반환
};

Coffee::Coffee(string o) { // 생성자
	order = o;
}

/**** C++ 관심있으신 분들은 아래 생성자 공부 더 해주세요 ****/
Coffee::Coffee(string o, int s) // 이것이 찐 기본 생성자!
				// https://ebebeb111.tistory.com/17
	: order(o), shot(s)
{

}

/**** 소멸자 ****/
Coffee::~Coffee() { 
	cout << order << " 주문 처리가 완료되었습니다.";
}

string Coffee::getOrder() {
	return order;
}

void Coffee::setOrder(string o) {
	order = o;
}

/**** 샷 개수 반환 ****/
int Coffee::getShot() {
	return shot;
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
	
	/**** 샷 개수 입력 ****/
	int shotNum;
	cout << "샷은 몇개 넣어드릴까요?";
	cin >> shotNum; // cin은 엔터값 안 받음
	cin.ignore(); // ★ 유의 ★ 엔터값 패스용 ignore

	Coffee orderedCoffee(temp + name); // 객체 선언
	//orderedCoffee.setOrder(temp + name); // 아이스아메리카노
	
	cout << "주문하신 " << orderedCoffee2.getShot() << "샷 "
		<< orderedCoffee2.getOrder() << "나왔습니다." << endl;
	// 출력 : 주문하신 3샷 아이스아메리카노 나왔습니다.
	
	//orderedCoffee.~Coffee(); // 소멸자 - 컴파일러가 알아서 소환할 함수
}
