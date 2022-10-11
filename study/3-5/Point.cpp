#include "Point.h"
#include <iostream>
using namespace std;

Point::Point() : Point(0, 0) {}

Point::Point(int a, int b)
	: x(a), y(b) {}


int main() {
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}
