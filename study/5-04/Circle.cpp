#include "Circle.h"
#include <iostream>
using namespace std;

int main() {
	Circle circle;
	// circle ��ü�� ���� ���� ���� refc ���� 
	Circle& refc = circle;
	refc.setRadius(10);
	cout << refc.getArea() << "\t" << circle.getArea() << endl;
}