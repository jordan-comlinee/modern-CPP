#include "Circle.h"
#include <iostream>
using namespace std;

//Circle 구현부
double Circle::getArea() {
	return 3.14 * radius * radius;
}



int main() {
	// 객체 donut 생성
	Circle donut;
	// donut의 멤버 변수 접근
	donut.radius = 1;
	// donut의 멤버 함수 호출
	double area = donut.getArea();
	cout << "donut의 면적은" << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza의 면적은 " << area << endl;
}