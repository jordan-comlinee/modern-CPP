#include "Circle.h"
#include <iostream>
using namespace std;

int main() {
	Circle circle;
	// circle 객체에 대한 참조 변수 refc 선언 
	Circle& refc = circle;
	refc.setRadius(10);
	cout << refc.getArea() << "\t" << circle.getArea() << endl;
}