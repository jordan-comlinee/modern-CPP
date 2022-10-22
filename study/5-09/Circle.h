#pragma once
class Circle {
	int radius;
public:
	// 복사 생성자 선언
	// Circle&... 자기 클래스에 대한 참조 매개 변수
	Circle(const Circle& c);
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
	void setRadius(int radius) { this->radius = radius; }
};

