#include "CRect.h"
#include <iostream>
using namespace std;

CRect::CRect(int width, int height) {
	this->point[0].setPoint(0, 0);
	this->point[1].setPoint(width, 0);
	this->point[2].setPoint(width, height);
	this->point[3].setPoint(0, height);
}

int CRect::getArea() {
	int ax = 0;
	int ay = 0;
	point[2].getPoint(ax, ay);
	return ax * ay;
}