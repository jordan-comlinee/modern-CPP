#include "Rectangle.h"
#include <iostream>
using namespace std;

/*
Rectangle::Rectangle() {
	width = height = 1;
	cout << "called Rectangle(int w, int h)" << endl;
}
*/

Rectangle::Rectangle() : Rectangle(height, width) {
	height = width = 1;
}

Rectangle::Rectangle(int length) : Rectangle(length, length) {}

Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
}

bool Rectangle::isSquare() {
	if (width == height)
		return true;
	else
		return false;
}


int main() {
	Rectangle rect1;
	Rectangle rect2(4, 6);
	Rectangle rect3(3);




	if (rect1.isSquare()) cout << rect1.width << " " << rect1.height << " rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << rect2.width << " " << rect2.height << " rect2은 정사각형이다." << endl;
	if (rect3.isSquare()) cout << rect3.width << " " << rect3.height << " rect3은 정사각형이다." << endl;
}