#include <iostream>
#include "Circle.h"
#include "CircleManager.h"
using namespace std;

int main() {
	int size;
	cout << "���� ���� >> ";
	cin >> size;
	CircleManager circleArray(size);
	circleArray.searchByName();
	circleArray.searchByArea();

}