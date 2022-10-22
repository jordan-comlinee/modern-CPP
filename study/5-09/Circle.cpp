#include "Circle.h"
#include <iostream>
using namespace std;


Circle::Circle(const Circle& c) {
	this->radius = c.radius;
	cout << "복사 생성자 실행 radius = " << radius << endl;
}

int main() {
	Circle src(30);
	Circle dest(src);
	
	src.setRadius(20);

	cout << "원본의 면적 = " << src.getArea() << endl;
	cout << "사본의 면적 = " << dest.getArea() << endl;
}
