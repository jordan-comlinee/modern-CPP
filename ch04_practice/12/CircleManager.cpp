#include "CircleManager.h"
#include "Circle.h"
#include <iostream>
#include <string>
using namespace std;

CircleManager::CircleManager(int size) {
	string name;
	int radius;
	this->size = size;
	this->p = new Circle[size];
	for (int i = 0; i < size; i++) {
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}
}

CircleManager::~CircleManager() {
	delete[] p;
}

void CircleManager::searchByName() {
	string sname;
	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> sname;
	for (int i = 0; i < size; i++) {
		if (sname == p[i].getName()) {
			cout << sname << "의 면적은" << p[i].getArea() << endl;
			return;
		}
	}
}

void CircleManager::searchByArea() {
	int sArea;
	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> sArea;
	cout << sArea << "보다 큰 원을 검색합니다." << endl;
	for (int i = 0; i < this->size; i++) {
		if (p[i].getArea() > sArea) {
			cout << p->getName() << "의 면적은" << p[i].getArea() << ", ";
		}
	}
}