#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle() {
	radius = 1;
}

Circle::Circle(int r) {
	radius = r;
}

Circle::~Circle() {}


int main() {
	cout << "�����ϰ��� �ϴ� ���� ������?";
	int n, radius;
	cin >> n;

	Circle* pArray = new Circle[n];
	for (int i = 0; i < n; i++) {
		cout << "��" << i + 1 << ": ";
		cin >> radius;
		pArray[i].setRadius(radius);
	}

	int count = 0;
	Circle* p = pArray;
	for (int i = 0; i < n; i++) {
		cout << p->getArea() << " ";
		// �̰� �ȵǴ� ������ &&�� �ƴ϶� or�� �ν��ϱ� �����̴�.
		//if (100 <= p->getArea() <= 200)
		if (100 <= p->getArea() && p->getArea() <= 200)
			count++;
		p++;
	}
	cout << endl << "������ 100���� 200 ������ ���� ������ " << count << endl;
	
	delete [] pArray;


}