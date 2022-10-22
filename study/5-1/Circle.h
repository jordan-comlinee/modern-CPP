#pragma once
class Circle
{
private:
	int radius;
public:
	Circle();
	Circle(int radius);
	~Circle();
	double getArea() { return radius * radius * 3.14; }
	int getRadius() { return radius; }
	void setRadius(int r) { radius = r; }
};

