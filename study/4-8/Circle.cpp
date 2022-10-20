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

int main() {
	int radius;
	while (true) {
		cout << "������ �������� �Է��ϼ���. ������ �Է��� �Ұ��մϴ�. : ";
		cin >> radius;
		// radius�� ������ ��� break�ؼ� while���� ����
		if (radius < 0)
			break;
		// Circle Ŭ������ ��ü�� ���� ������. ���� �޸𸮿� �ö� �� �ƴ�.
		Circle* p;
		// �Է¹��� ������ ���������� �ϴ� ��ü�� �ϳ� ������
		p = new Circle(radius);
		// ������ �����̹Ƿ� ->�� �����Ѿ� ��.
		cout << "���� ������ : " << p->getArea() << endl;
		// �޸��� ȿ���� ����� ���� �ּҿ� ����� ��ü�� �����ϵ��� ��..�޸� ������ �����ϰ��� ��
		delete p;
	}
}