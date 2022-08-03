#include <stdio.h> // 기본 입출력

typedef struct { // 자료구조 : 배열리스트
	int list[5]; // 5칸 리스트 역할
	int size; // 원소 개수
} ArrayList;

// 초기화
void init(ArrayList* L) {
	L->size = 0; // 원소 개수 0으로 셋팅
				 // 우린 이제 시작이다!
	// 주소값을 받아서, 원래 그 안에 값에 접근하려면
	// *L 이렇게 써야했는디
	// 약속을 한거에요. 그냥 L을 쓰되 -> 랑 같이 쓰면
	// C언어가 알아서 해석해주겠다고.
}

// 비었는지 확인
int isEmpty(ArrayList* L) { // 사실 그냥 ArrayList 받아도 되는데
							// 통일감 주려고
	if (L->size == 0) { // 비었으면,
						// = 원소가 0개라구요
		return 1;		// true
	} else {
		return 0;		// false
	}
}

// 꽉 찼는지
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