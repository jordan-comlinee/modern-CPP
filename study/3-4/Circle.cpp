#include "Circle.h"
#include <iostream>
using namespace std;


// 위임 생성자... 타겟 생성자와 기능이 같은데 입력변수가 다를 때...위임한다고 해서 위임
Circle::Circle() : Circle(1) {}

// 타겟 생성자
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
	area - pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}