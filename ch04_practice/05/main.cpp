#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	string s;
	int n;
	int m;

	cout << "�Ʒ��� �� ���� �Է��ϼ���. (exit�� �Է��ϸ� �����մϴ�.)" << endl;
	while (true) {
		cout << ">> ";
		getline(cin, s, '\n');
		if (s == "exit")
			break;
		n = rand() % s.length();
		m = rand() % 26;
		// ���� ������ ����
		char changeChar = 'a' + m;
		if (s[n] == 'a' + m) // ���� ���ڿ� ���� ������ ���ڰ� ���ٸ�
			changeChar = 'A' + m;
		s[n] = changeChar;
		cout << s << endl;
	}
}