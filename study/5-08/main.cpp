#include <iostream>
using namespace std;

char& find(char s[], int index) {
	// s[index] ������ ������ ������
	return s[index];
}

int main() {
	char name[] = "Mike";
	cout << name << endl;

	// name[0] = 'S'
	find(name, 0) = 'S';
	cout << name << endl;

	// ref�� name[2]�� ������.
	char& ref = find(name, 2);
	// name[2] = 't'
	ref = 't';
	cout << name << endl;

}