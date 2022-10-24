#include <iostream>
using namespace std;
/*
char& find(char s[], int index) {
	// s[index] 공간의 참조를 리턴함, 변수의 값을 리턴하는 것이 아님.
	return s[index];
}

int main() {
	char name[] = "Mike";
	cout << name << endl;

	// name[0] = 'S'....find()가 리턴한 위치에는 문자 M이 저장되어 있음
	find(name, 0) = 'S';
	cout << name << endl;

	// ref는 name[2]를 참조함.
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