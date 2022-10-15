#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	cout << "문자열을 입력하세요.." << endl;

	getline(cin, s, '\n');
	int len = s.length();

	for (int i = 0; i < len; i++) {
		//substr은 문자열의 일부분을 추출하는 함수이다!
		string first = s.substr(0, 1); // 문자열의 맨 앞쪽 부분 추출
		string sub = s.substr(1, len - 1); // 문자열의 맨 앞에서 두번째부터~ len-1씩 추출
		s = sub + first; // 문자열의 맨 앞부분 가장 뒤로 옮김
		cout << s << endl;
	}


	for (int i=0; i < len/2; i++) {
		//substr은 문자열의 일부분을 추출하는 함수이다!
		string first = s.substr(0, 2);
		string sub = s.substr(1, len - 2);
		s = sub + first;
		cout << s << endl;
	}
}
