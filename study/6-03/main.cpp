#include <iostream>
#include <string>
using namespace std;

// 디폴트 매개변수 선언....디폴트로 이 값이 되는 거임
//void star(int a = 5);
void msg(int id, string text = "");
// 함수 구현
// int a 라고 할 수도 있지만 두개를 합칠 수도 있음!
void star(int a = 5) {
	for (int i = 0; i < a; i++)
		cout << '*';
	cout << endl;
}

void msg(int id, string text) {
	cout << id << ' ' << text << endl;
}

int main() {
	star();
	star(10);

	msg(10);
	msg(10, "Hello");
}