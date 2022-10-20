#pragma once
class Circle
{
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return radius * radius * 3.14; }
};

