#pragma once
class Circle {
	int radius;
public:
	// ���� ������ ����
	// Circle&... �ڱ� Ŭ������ ���� ���� �Ű� ����
	Circle(const Circle& c);
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
	void setRadius(int radius) { this->radius = radius; }
};

