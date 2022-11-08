#include "Color.h"
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

Color operator+ (Color a, Color b) {
	Color c;
	c.red = a.red + b.red;
	c.green = a.green + b.green;
	c.blue = a.blue + b.blue;
	return c;
}

bool operator== (Color a, Color b) {
	if (a.red == b.red && a.blue == b.blue)
		return true;
	return false;
}