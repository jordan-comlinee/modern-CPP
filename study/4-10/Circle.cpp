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
	cout << "생성하고자 하는 원의 개수는?";
	int n, radius;
	cin >> n;

	Circle* pArray = new Circle[n];
	for (int i = 0; i < n; i++) {
		cout << "원" << i + 1 << ": ";
		cin >> radius;
		pArray[i].setRadius(radius);
	}

	int count = 0;
	Circle* p = pArray;
	for (int i = 0; i < n; i++) {
		cout << p->getArea() << " ";
		// 이게 안되는 이유는 &&이 아니라 or로 인식하기 때문이다.
		//if (100 <= p->getArea() <= 200)
		if (100 <= p->getArea() && p->getArea() <= 200)
			count++;
		p++;
	}
	cout << endl << "면적이 100에서 200 사이인 원의 개수는 " << count << endl;
	
	delete [] pArray;


}