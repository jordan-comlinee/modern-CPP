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

double Circle::getArea() {
	return 3.14 * radius * radius;
}


int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}