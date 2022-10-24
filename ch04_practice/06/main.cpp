#include <iostream>
#include <string>
using namespace std;

int main() {
	string text;
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
	while (true) {
		cout << ">>";
		getline(cin, text, '\n');
		if (text == "exit")
			break;
		int size = text.length();
		int n = size / 2;
		cout << size << " " << n << endl;

		for (int i = 0; i < n; i++) {
			cout << text[i] << endl;
			char tmp = text[i];
			text[i] = text[size - i - 1];
			text[size - i - 1] = tmp;
		}
		cout << text << endl;
	}
}