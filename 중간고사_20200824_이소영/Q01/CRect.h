#pragma once
#include "CPoint.h"

class CRect
{
	CPoint point[4];
public:
	CRect();
	CRect(int width, int height);
	int getArea();

};

