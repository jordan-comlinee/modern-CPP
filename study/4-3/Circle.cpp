#include "Circle.h"
#include <iostream>
using namespace std;

double Circle::getArea() {
	return 3.14 * radius * radius;
}


int main() {
	Circle circleArray[3] = { Circle(10), Circle(20), Circle() };

	for (int i = 0; i < 3; i++) {
		cout << "Circle" << i << "�� ������ " << circleArray[i].getArea() << endl;
	}
}
