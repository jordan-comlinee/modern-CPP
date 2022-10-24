#include "Circle.h"
#include <iostream>
using namespace std;

void swap(Circle &circle1, Circle &circle2) {
	int tmp;
	tmp = circle1.getRadius();
	circle1.setRadius(circle2.getRadius());
	circle2.setRadius(tmp);
}

int main() {
	Circle aCircle(5);
	Circle bCircle(10);

	cout << aCircle.getRadius() << " "  << bCircle.getRadius() << endl;
	swap(aCircle, bCircle);
	cout << aCircle.getRadius() << " " << bCircle.getRadius() << endl;
}