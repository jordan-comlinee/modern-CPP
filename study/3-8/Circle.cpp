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
	cout << "�������� " << radius << "�� �� ����" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

Circle globalDonut(1000);
Circle globalPizza(2000);

void f() {
	Circle fDonut(100);
	Circle fPizza(200);
}

int main() {
	Circle mainDonut;
	Circle mainPizza(30);
	f();
}