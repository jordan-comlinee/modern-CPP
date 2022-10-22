// ????? �Ӽ� ������ �𸣰ڻ�.. 252 ������ ����
#define _CRT_SECURE_NO_WARNINGS
#include "Person.h"
#include <iostream>
#include <cstring>
using namespace std;

// ������
Person::Person(int id, const char* name) {
	// id �Ҵ�
	this->id = id;
	// name�� ���� ����
	int len = strlen(name);
	// name ���ڿ���ŭ ������ �Ҵ����ش�.
	this->name = new char[len + 1];
	// name �Ҵ�
	strcpy(this->name, name);
}

Person::Person(const Person& person) {
	this->id = person.id;
	int len = strlen(person.name);
	this->name = new char[len + 1];
	strcpy(this->name, person.name);
	cout << "���� ������ ����. ���� ��ü�� �̸�" << this->name << endl;
}

Person::~Person() {
	// ���࿡ name�� ���� �Ҵ�� �迭�� �ִٸ�
	if (name)
		// ���� �Ҵ� �޸� �Ҹ�
		delete [] name;
}

void Person::changeName(const char* name) {
	if (strlen(name) > strlen(this->name))
		return;
	strcpy(this->name, name);
}

int main() {
	Person father(1, "Kitae");
	Person daughter(father);

	cout << "daughter ��ü ���� ���� ----- " << endl;
	father.show();
	daughter.show();

	daughter.changeName("Grace");
	cout << "daughter �̸��� Grace�� ������ �� ---- " << endl;
	father.show();
	daughter.show();

	return 0;

}