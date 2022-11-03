#include "CPoint.h"
#include <iostream>
using namespace std;

CPoint::CPoint() {
	x = 0;
	y = 0;
}

void CPoint::setPoint(int x, int y) {
	this->x = x;
	this->y = y;
}

void CPoint::getPoint(int& ax, int& ay) {
	ax = this->x;
	ay = this->y;
}