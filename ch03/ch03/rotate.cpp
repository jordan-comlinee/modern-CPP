#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	cout << "���ڿ��� �Է��ϼ���.." << endl;

	getline(cin, s, '\n');
	int len = s.length();

	for (int i = 0; i < len; i++) {
		//substr�� ���ڿ��� �Ϻκ��� �����ϴ� �Լ��̴�!
		string first = s.substr(0, 1); // ���ڿ��� �� ���� �κ� ����
		string sub = s.substr(1, len - 1); // ���ڿ��� �� �տ��� �ι�°����~ len-1�� ����
		s = sub + first; // ���ڿ��� �� �պκ� ���� �ڷ� �ű�
		cout << s << endl;
	}


	for (int i=0; i < len/2; i++) {
		//substr�� ���ڿ��� �Ϻκ��� �����ϴ� �Լ��̴�!
		string first = s.substr(0, 2);
		string sub = s.substr(1, len - 2);
		s = sub + first;
		cout << s << endl;
	}
}
