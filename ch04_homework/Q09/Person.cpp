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

	cout << "�̸��� ��ȭ��ȣ�� �Է����ּ���." << endl;
	for (int i = 0; i < 3; i++) {
		cout << "��� " << i+1 << ">>";
		cin >> nameInput >> telInput;
		Person[i].set(nameInput, telInput);
	}

	cout << "��� ����� �̸���: ";
	for (int i = 0; i < 3; i++) {
		cout << Person[i].getName() << " ";
	}
	cout << endl;

	cout << "��ȭ��ȣ�� �˻��մϴ�. �̸��� �Է����ּ���. >> ";
	cin >> searchName;

	for (int i = 0; i < 3; i++) {
		int findex = Person[i].getName().find(searchName);
		if (findex == 0) {
			cout << "��ȭ��ȣ�� " << Person[i].getTel() << endl;
		}
	}

}