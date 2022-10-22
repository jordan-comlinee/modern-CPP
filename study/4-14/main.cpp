#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cout << "덧셈 문자열을 입력하세요." << endl;
	// 덧셈 문자열 입력
	getline(cin, s, '\n');
	int sum = 0;
	int startIndex = 0;
	//덧셈 반복
	while (true) {
		// 덧셈 문자열에서 + 부분을 찾는다.
		int fIndex = s.find('+', startIndex);
		// 만약에 덧셈 문자열에서 덧셈이 없다면
		if (fIndex == -1) {
			// part에 숫자를 저장한다.
			string part = s.substr(startIndex);
			// 만약에 + 다음에 숫자가 없다면, if문 종료
			if (part == "")
				break;
			// part가 어떤 숫자인지 출력한다.
			cout << part << endl;
			// sum 변수에 part를 저장한다. stoi = string to int
			sum += stoi(part);
			// if문 종료
			break;
		}
		// 서브스트링으로 자를 문자 개수
		int count = fIndex - startIndex;
		// startIndex부터 count 개의 문자로 서브스트링, 문자열을 자른다는 뜻
		string part = s.substr(startIndex, count);
		cout << part << endl;
		// 문자열을 수로 변환하여 더해준다.
		sum += stoi(part);
		// 검색을 시작할 인덱스를 전진시킨다.
		startIndex = fIndex + 1;
	}

	cout << "숫자들의 합은 " << sum;

}