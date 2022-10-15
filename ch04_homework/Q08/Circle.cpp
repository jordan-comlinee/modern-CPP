#include "Circle.h"
#include <iostream>
using namespace std;

void Circle::setRadius(int radius) {
	this->radius = radius;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	int cnt = 0;
	int numArray;
	cout << "���� ���� �Է� >> ";
	cin >> numArray;
	Circle* circleArray = new Circle[numArray];

	for (int i = 0; i < numArray; i++) {
		int r;
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> r;
		circleArray[i].setRadius(r);

		if (circleArray[i].getArea() > 100)
			cnt++;
	}

	cout << "������ 100���� ū ���� " << cnt << "�� �Դϴ�." << endl;
}