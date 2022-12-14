// ????? 머선 말인지 모르겠삼.. 252 페이지 참고
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

Person::~Person() {
	// 만약에 name에 동적 할당된 배열이 있다면
	if (name)
		// 동적 할당 메모리 소멸
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

	cout << "daughter 객체 생성 직후 ----- " << endl;
	father.show();
	daughter.show();

	daughter.changeName("Grace");
	cout << "daughter 이름을 Grace로 변경한 후 ---- " << endl;
	father.show();
	daughter.show();

	return 0;

}