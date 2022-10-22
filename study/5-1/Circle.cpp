#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle() : Circle(1) {};

Circle::Circle(int radius) {
	this->radius = radius;
	cout << "积己磊 角青 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "家戈磊 角青 radius = " << radius << endl;
}

void increase(Circle c) {
	int r = c.getRadius();
	c.setRadius(r + 5);
}

int main() {
	Circle waffle(30);
	increase(waffle);
	cout << waffle.getRadius() << endl;

}