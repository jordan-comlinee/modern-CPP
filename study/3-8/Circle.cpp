#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle() {
	radius = 1;
	cout << "반지름이 " << radius << "인 원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름이 " << radius << "인 원 생성" << endl;
}

Circle::~Circle() {
	cout << "반지름이 " << radius << "인 원 생성" << endl;
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