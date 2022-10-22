// 생성자는 2번 나오는데 왜 소멸자가 3번이 나오지??
#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle() : Circle(1) {};

Circle::Circle(int radius) {
	this->radius = radius;
}

Circle::~Circle() {
}

Circle getCircle() {
	Circle tmp(30);
	// 객체 tmp의 복사본을 리턴함
	return tmp;
}

int main() {
	Circle c;
	cout << c.getArea() << endl;

	// tmp의 객체가 c에 복사. c의 radius 는 30이 된다.
	c = getCircle();
	cout << c.getArea() << endl;

}