#define _CRT_SECURE_NO_WARNINGS
#include "Person.h"
#include <iostream>
#include <cstring>
using namespace std;

// 생성자
Person::Person(int id, const char* name) {
	// id 할당
	this->id = id;
	// name의 문자 개수
	int len = strlen(name);
	// name 문자열만큼 공간을 할당해준다.
	this->name = new char[len + 1];
	// name 할당
	strcpy(this->name, name);
}

Person::Person(const Person& person) {
	this->id = person.id;
	int len = strlen(person.name);
	this->name = new char[len + 1];
	strcpy(this->name, person.name);
	cout << "복사 생성자 실행. 원본 객체의 이름" << this->name << endl;
}

Person::~Person() {
	// 만약에 name에 동적 할당된 배열이 있다면
	if (name)
		// 동적 할당 메모리 소멸
		delete[] name;
}

void Person::changeName(const char* name) {
	if (strlen(name) > strlen(this->name))
		return;
	strcpy(this->name, name);
}
// 값에 의한 호출로 객체가 전달될 때 person 객체의 복사 생성자가 호출된다.
void f(Person person) {
	person.changeName("dummy");
}
// 함수에서 객체를 리턴 시, mother 객체의 복사본이 생성된다.
Person g() {
	Person mother(2, "Jane");
	return mother;
}

int main() {
	Person father(1, "Kitae");
	// 객체로 초기화하여 객체 생성 시 son 객체의 복사 생성자 호출됨.
	Person son = father;
	f(father);
	g();
}