#include <iostream>

// ~ 12:18까지 쉬는 시간 입니다 :)
class Book { // 객체를 만들기 위한 클래스
	// 클래스 밖에서 접근이 안되는 변수
	private: // 생략 가능
		int totalPage; // 전체 페이지
		int readPage; // 읽은 페이지 (쪽 수)
	public: // 밖에서 접근 가능
		void setTotalPage(int tp);
		int getTotalPage();
};

// setter : private 변수 값을 설정 함수
void Book::setTotalPage(int tp) {
	totalPage = tp;
}

// getter : private 변수 값을 갖다주는 함수
int Book::getTotalPage() {
	return totalPage;
}


int main() {
	Book littlePrince;
	littlePrince.setTotalPage(100);
	printf("%d", littlePrince.getTotalPage());

	return 0;
}
/*
	main
	Book littlePrince
	// 총 페이지 수, 읽은 페이지 입력
	// 출력 : 어린왕자의 총 페이지 수는 00 페이지이고,
			  저는 00페이지까지 읽었습니다.
			  따라서 00% 읽었네요. - 정수로만
	Book momo
	// 총 페이지 수, 읽은 페이지 입력
	// 출력 : 모모의 총 페이지 수는 00 페이지이고,
			  저는 00페이지까지 읽었습니다.
			  따라서 00% 읽었네요.
*/
