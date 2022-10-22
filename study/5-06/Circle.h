#pragma once
class Circle
{
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int radius) { this->radius = radius; }
	int getRadius() { return radius; }
	double getArea() { return 3.14 * radius * radius; }
};

