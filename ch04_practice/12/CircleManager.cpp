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
		cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}
}

CircleManager::~CircleManager() {
	delete[] p;
}

void CircleManager::searchByName() {
	string sname;
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> sname;
	for (int i = 0; i < size; i++) {
		if (sname == p[i].getName()) {
			cout << sname << "�� ������" << p[i].getArea() << endl;
			return;
		}
	}
}

void CircleManager::searchByArea() {
	int sArea;
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	cin >> sArea;
	cout << sArea << "���� ū ���� �˻��մϴ�." << endl;
	for (int i = 0; i < this->size; i++) {
		if (p[i].getArea() > sArea) {
			cout << p->getName() << "�� ������" << p[i].getArea() << ", ";
		}
	}
}