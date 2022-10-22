#include <iostream>
using namespace std;

void msg(int id) {
	cout << id << endl;
}

double msg(int id, string s = " ") {
	cout << id << ": " << s << endl;
}


int main() {
	// 얘는 두번째인 게 명확해서 정상 컴파일된다.
	msg(5, "Good Morning");
	// 디폴트 매개 변수로 인한 함수 중복의 모호성
	msg(6);
}