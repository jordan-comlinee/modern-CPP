// �����ڴ� 2�� �����µ� �� �Ҹ��ڰ� 3���� ������??
#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle() : Circle(1) {};

Circle::Circle(int radius) {
	this->radius = radius;
}

Circle::~Circle() {
}

Circle getCircle() {
	Circle tmp(30);
	// ��ü tmp�� ���纻�� ������
	return tmp;
}

int main() {
	Circle c;
	cout << c.getArea() << endl;

	// tmp�� ��ü�� c�� ����. c�� radius �� 30�� �ȴ�.
	c = getCircle();
	cout << c.getArea() << endl;

}