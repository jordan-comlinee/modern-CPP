#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

int main() {
	int radius;
	while (true) {
		cout << "정수의 반지름은 입력하세요. 음수는 입력이 불가합니다. : ";
		cin >> radius;
		// radius가 음수인 경우 break해서 while에서 나옴
		if (radius < 0)
			break;
		// Circle 클래스의 객체를 동적 생성함. 아직 메모리에 올라간 게 아님.
		Circle* p;
		// 입력받은 정수를 반지름으로 하는 객체를 하나 생성함
		p = new Circle(radius);
		// 포인터 변수이므로 ->로 가리켜야 함.
		cout << "원의 면적은 : " << p->getArea() << endl;
		// 메모리의 효율적 사용을 위해 주소에 저장된 객체는 삭제하도록 함..메모리 누수를 방지하고자 함
		delete p;
	}
}