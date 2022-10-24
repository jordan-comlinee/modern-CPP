#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	string s;
	int n;
	int m;

	cout << "아래에 한 줄을 입력하세요. (exit을 입력하면 종료합니다.)" << endl;
	while (true) {
		cout << ">> ";
		getline(cin, s, '\n');
		if (s == "exit")
			break;
		n = rand() % s.length();
		m = rand() % 26;
		// 새로 삽입할 문자
		char changeChar = 'a' + m;
		if (s[n] == 'a' + m) // 기존 문자와 새로 삽입할 문자가 같다면
			changeChar = 'A' + m;
		s[n] = changeChar;
		cout << s << endl;
	}
}