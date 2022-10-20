#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle() {
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

int main() {
	Circle* pArray;
	// ó�� ������ ���� �������� ���� �ʱ� ��������� �����ȴ�.
	pArray = new Circle[3];
	// pArray[0],[1],[2] ������� ���� �� ����. �ٷ� ���� �ּҿ� �ϳ��� ������ ����
	pArray[0].setRadius(10);
	pArray[1].setRadius(20);
	pArray[2].setRadius(30);

	for (int i = 0; i < 3; i++) {
		cout << pArray[i].getArea() << endl;
	}
	Circle* p = pArray;
	for (int i = 0; i < 3; i++) {
		cout << p->getArea() << endl;
		p++;
	}

	delete[] pArray;
}