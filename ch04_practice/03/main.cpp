#include <iostream>
#include <string>
using namespace std;

int main() {
	string text;
	int cnt = 0;
	int count = 0;
	int index = 0;

	cout << "���ڿ� �Է�>> ";
	getline(cin, text);

	for (int i = 0; i < text.length(); i++) {
		if (text.at('a'))
			cnt++;
	}
	cout << "���� a�� " << cnt << "�� �ֽ��ϴ�." << endl;

	while (true) {
		index = text.find('a', index + 1);
		if (index == -1)
			break;
		else
			count++;
	}
	cout << "���� a�� " << count << "�� �ֽ��ϴ�." << endl;

	return 0;
	
}