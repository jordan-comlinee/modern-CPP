#include <iostream>
using namespace std;

int main() {
	int* p;

	// int 타입 1개 할당하였음
	p = new int;
	if (!p) {
		// p가 NULL이면 메모리 할당에 실패한 것임.
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}
	// 메모리에 들어있던 쓰레기값 출력
	cout << "*p = " << *p << '\n';
	// 할당받은 int 공간에 5 삽입
	*p = 5;
	// n 은 call by value를 한 것임
	int n = *p;
	cout << "*p = " << *p << '\n';
	cout << "n = " << n << '\n';
	// 할당받은 메모리 반환
	delete p;

}