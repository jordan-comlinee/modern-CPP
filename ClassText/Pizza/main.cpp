#include <iostream>
#include "CPizza.h"
using namespace std;


void swap(CPizza& a, CPizza& b) {    // 참조형 함수 파라미터 선언 

	string strTemp;                // 임시 저장 변수 선언
	strTemp = a.getTopping();      // a 의 strTopping 반환
	a.setTopping(b.getTopping());  // b 의 strTopping를 a의 strTopping세팅 세팅
	b.setTopping(strTemp);         // a 의 strToppingf를 b strTopping로 세팅
}

void swap(CPizza* a, CPizza* b) {

	string strTemp;                  // 임시 저장 변수 선언
	strTemp = a->getTopping();       // a 의 strTopping 반환
	a->setTopping(b->getTopping());  // b 의 strTopping를 a의 strTopping세팅 세팅
	b->setTopping(strTemp);          // a 의 strToppingf를 b strTopping로 세팅
}


int main() {

	CPizza blueberryPizza;
	CPizza strawberryPizza(5);

	blueberryPizza.setTopping("blueberry");
	strawberryPizza.setTopping("strawberry");
	
	cout << "-----blue values-----" << endl;
	cout << "Radius: " << blueberryPizza.getRadius() << endl;
	cout << "Topping: " << blueberryPizza.getTopping() << endl;

	cout << "-----straw values-----" << endl;
	cout << "Radius: " << strawberryPizza.getRadius() << endl;
	cout << "Topping: " << strawberryPizza.getTopping() << endl;

	swap(blueberryPizza, strawberryPizza);
	
	cout << "-----blue values-----" << endl;
	cout << "Radius: " << blueberryPizza.getRadius() << endl;
	cout << "Topping: " << blueberryPizza.getTopping() << endl;

	cout << "-----straw values-----" << endl;
	cout << "Radius: " << strawberryPizza.getRadius() << endl;
	cout << "Topping: " << strawberryPizza.getTopping() << endl;

	swap(&blueberryPizza, &strawberryPizza);

	cout << "-----blue values-----" << endl;
	cout << "Radius: " << blueberryPizza.getRadius() << endl;
	cout << "Topping: " << blueberryPizza.getTopping() << endl;

	cout << "-----straw values-----" << endl;
	cout << "Radius: " << strawberryPizza.getRadius() << endl;
	cout << "Topping: " << strawberryPizza.getTopping() << endl;

	return 0;
}