#include <iostream>
using namespace std;
/*
char& find(char s[], int index) {
	// s[index] ������ ������ ������, ������ ���� �����ϴ� ���� �ƴ�.
	return s[index];
}

int main() {
	char name[] = "Mike";
	cout << name << endl;

	// name[0] = 'S'....find()�� ������ ��ġ���� ���� M�� ����Ǿ� ����
	find(name, 0) = 'S';
	cout << name << endl;

	// ref�� name[2]�� ������.
	char& ref = find(name, 2);
	// name[2] = 't'
	ref = 't';
	cout << name << endl;

}
*/

char& find(char s[], int index) {
	return s[index];
}

int main() {
	char name[] = "Mike";
	cout << name << endl;

	find(name, 0) = 'S';
	cout << name << endl;

	char& ref = find(name, 2);
	ref = 't';
	cout << name << endl;
}