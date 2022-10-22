#include "Circle.h"
#include <iostream>
using namespace std;


Circle::Circle(const Circle& c) {
	this->radius = c.radius;
	cout << "���� ������ ���� radius = " << radius << endl;
}

int main() {
	Circle src(30);
	Circle dest(src);
	
	src.setRadius(20);

	cout << "������ ���� = " << src.getArea() << endl;
	cout << "�纻�� ���� = " << dest.getArea() << endl;
}
