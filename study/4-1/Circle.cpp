#include <iostream>
#include "Circle.h"
using namespace std;

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	Circle pizza(30);

	// ��ü �̸����� ��� ����
	cout << donut.getArea() << endl;

	// ��ü �����ͷ� ��� ����
	Circle* p;
	p = &donut;
	// donut�� getArea() ȣ��
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;
	// pizza�� getArea() ȣ��
	p = &pizza;
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;
}