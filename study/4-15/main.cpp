#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "���� ���� ���ڿ��� �Է��ϼ���. �Է��� ���� &�����Դϴ�." << endl;
	getline(cin, s, '&');
	//& �ڿ� ������� \n Ű�� �����ϱ� ���� �ڵ���.
	cin.ignore();
	string f, r;
	// �˻��� ���ڿ� �Է�
	cout << endl << "find: ";
	getline(cin, f, '\n');
	// ��ü�� ���ڿ� �Է�
	cout << "replace: ";
	getline(cin, r, '\n');

	int startIndex = 0;
	while (true) {
		// startIndex�������� ���ڿ� f �˻���.
		int fIndex = s.find(f, startIndex);
		if (fIndex == -1)
			// ��� �ٲ� ��� / �˻� ���� �� break
			break;
		// fIndex�������� ���ڿ� f�� ���̸�ŭ ���ڿ� r�� ����
		s.replace(fIndex, f.length(), r);
		startIndex = fIndex + r.length();
	}
	cout << s << endl;
}