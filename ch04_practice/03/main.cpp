#include <iostream>
#include <string>
using namespace std;

int main() {
	string text;
	int cnt = 0;
	int count = 0;
	int index = 0;

	cout << "문자열 입력>> ";
	getline(cin, text);

	for (int i = 0; i < text.length(); i++) {
		if (text.at('a'))
			cnt++;
	}
	cout << "문자 a는 " << cnt << "개 있습니다." << endl;

	while (true) {
		index = text.find('a', index + 1);
		if (index == -1)
			break;
		else
			count++;
	}
	cout << "문자 a는 " << count << "개 있습니다." << endl;

	return 0;
	
}