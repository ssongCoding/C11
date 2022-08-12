#include <stdio.h>

typedef struct {
	char tree[8]; // Tree 1~7번 (0번은 못 씀)
	int cur; // add, delete
} Tree;

void init(Tree* T) {
	T->cur = 1;
}

void addNode(Tree* T, char data) {
	if (T->cur == 8) {			// 꽉 찼으면,
		printf("Tree is full.");
	}
	else {
		T->tree[T->cur] = data; // 1
		T->cur++;				// 2
	}
}

void deleteNode(Tree* T) {
	if (T->cur == 1) {
		printf("Tree is Empty.");
	}
	else {
		T->cur = T->cur - 1;
	}	 
}

void show_parents(Tree* T, int position) {
	// 비었니?
	// => cur == 1
	// position 가 루트는 아니니? = 부모노드가 없는거 아니니?
	// position에 노드는 있니?
	// => 1 < position && position < cur 
	if (T->cur == 1) { // 비었니?
		printf("Tree is empty.");
	} else if (position == 1) { // 루트 노드니?
		printf("position == root라서 부모 노드가 없어.");
	} else if (position >= T->cur) {
		printf("position이 Tree를 벗어났어."); 
	} else {
		printf("parents node의 자리 : %d, 값 : %d\n",
			position / 2, T->tree[position / 2]);
	}
}

int main() {
	Tree T;
	init(&T);
	addNode(&T, 'A');
	addNode(&T, 'B');
	addNode(&T, 'C');
	addNode(&T, 'D');
	addNode(&T, 'E');
	addNode(&T, 'F');
	addNode(&T, 'G');

	display(&T); // A B C D E F G

	show_parent(&T, 3); // A
	show_left_child(&T, 2); // D
	show_right_child(&T, 2); // E

	deleteNode(&T);
	display(&T); // A B C D E F

	return 0;
}