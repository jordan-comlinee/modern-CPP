#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle() {
	radius = 1;
	cout << "�������� " << radius << "�� �� ����" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "�������� " << radius << "�� �� ����" << endl;
}

Circle::~Circle() {
	cout << "�������� " << radius << "�� �� �Ҹ�" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	Circle pizza(30);

	return 0;
}
