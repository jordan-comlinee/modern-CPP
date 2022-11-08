#include "Color.h"
#include <iostream>
using namespace std;

Color::Color() {}

Color::Color(int a, int b, int c) {
	red = a; 
	green = b; 
	blue = c;
}

void Color::show() {
	cout << red << ' ' << green << ' ' << blue << ' ' << endl;
}

Color Color::operator+ (Color b) {
	Color a;
	a.red = this->red + b.red;
	a.green = this->green + b.green;
	a.blue = this->blue + b.blue;
	return a;
}

bool Color::operator== (Color a) {
	if (this->red == a.red && this->blue == a.blue)
		return true;
	return false;
}