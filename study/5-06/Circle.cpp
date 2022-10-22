#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle() {
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

// ���� �Ű� ����....������ &, �̹� �����ϴ� ������ ���� �ٸ� �̸�(����)�� �����ϴ� ��
void increaseCircle(Circle &c) {
	int r = c.getRadius();
	c.setRadius(r+5);
}

int main() {
	Circle waffle(30);
	// waffle ��ü�� ������ ���� ȣ��Ǵ� ����
	increaseCircle(waffle);
	cout << waffle.getRadius() << endl;

}