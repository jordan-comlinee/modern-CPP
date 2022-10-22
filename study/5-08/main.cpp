#include <iostream>
using namespace std;

char& find(char s[], int index) {
	// s[index] 공간의 참조를 리턴함
	return s[index];
}

int main() {
	char name[] = "Mike";
	cout << name << endl;

	// name[0] = 'S'
	find(name, 0) = 'S';
	cout << name << endl;

	// ref는 name[2]를 참조함.
	char& ref = find(name, 2);
	// name[2] = 't'
	ref = 't';
	cout << name << endl;

}