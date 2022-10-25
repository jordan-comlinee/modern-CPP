#include <iostream>
#include "Circle.h"
#include "CircleManager.h"
using namespace std;

int main() {
	int size;
	cout << "원의 개수 >> ";
	cin >> size;
	CircleManager circleArray(size);
	circleArray.searchByName();
	circleArray.searchByArea();

}