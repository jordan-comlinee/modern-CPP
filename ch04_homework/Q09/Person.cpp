#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

Person::Person() {}

void Person::set(string name, string tel) {
	this->name = name;
	this->tel = tel;
}

int main() {
	Person Person[3];
	string nameInput;
	string telInput;
	string searchName;
	int search = 0;

	cout << "이름과 전화번호를 입력해주세요." << endl;
	for (int i = 0; i < 3; i++) {
		cout << "사람 " << i+1 << ">>";
		cin >> nameInput >> telInput;
		Person[i].set(nameInput, telInput);
	}

	cout << "모든 사람의 이름은: ";
	for (int i = 0; i < 3; i++) {
		cout << Person[i].getName() << " ";
	}
	cout << endl;

	cout << "전화번호를 검색합니다. 이름을 입력해주세요. >> ";
	cin >> searchName;

	for (int i = 0; i < 3; i++) {
		int findex = Person[i].getName().find(searchName);
		if (findex == 0) {
			cout << "전화번호는 " << Person[i].getTel() << endl;
		}
	}

}