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
	cout << "원의 개수 입력 >> ";
	cin >> numArray;
	Circle* circleArray = new Circle[numArray];

	for (int i = 0; i < numArray; i++) {
		int r;
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> r;
		circleArray[i].setRadius(r);

		if (circleArray[i].getArea() > 100)
			cnt++;
	}

	cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다." << endl;
}