#include "Circle.h"
#include <iostream>
using namespace std;

//Circle ������
double Circle::getArea() {
	return 3.14 * radius * radius;
}



int main() {
	// ��ü donut ����
	Circle donut;
	// donut�� ��� ���� ����
	donut.radius = 1;
	// donut�� ��� �Լ� ȣ��
	double area = donut.getArea();
	cout << "donut�� ������" << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza�� ������ " << area << endl;
}