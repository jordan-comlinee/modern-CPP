#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다." << endl;
	getline(cin, s, '&');
	//& 뒤에 따라오는 \n 키를 제거하기 위한 코드임.
	cin.ignore();
	string f, r;
	// 검색할 문자열 입력
	cout << endl << "find: ";
	getline(cin, f, '\n');
	// 대체할 문자열 입력
	cout << "replace: ";
	getline(cin, r, '\n');

	int startIndex = 0;
	while (true) {
		// startIndex에서부터 문자열 f 검색함.
		int fIndex = s.find(f, startIndex);
		if (fIndex == -1)
			// 모두 바꾼 경우 / 검색 실패 시 break
			break;
		// fIndex에서부터 문자열 f의 길이만큼 문자열 r로 변경
		s.replace(fIndex, f.length(), r);
		startIndex = fIndex + r.length();
	}
	cout << s << endl;
}