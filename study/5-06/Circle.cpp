#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

// 참조 매개 변수....차조자 &, 이미 존재하는 변수에 대한 다른 이름(별명)을 선언하는 것
void increaseCircle(Circle &c) {
	int r = c.getRadius();
	c.setRadius(r+5);
}

int main() {
	Circle waffle(30);
	// waffle 객체는 참조에 의해 호출되는 것임
	increaseCircle(waffle);
	cout << waffle.getRadius() << endl;

}