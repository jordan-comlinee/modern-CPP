#include <iostream>
#include "CPizza.h"
using namespace std;


void swap(CPizza& a, CPizza& b) {    // ������ �Լ� �Ķ���� ���� 

	string strTemp;                // �ӽ� ���� ���� ����
	strTemp = a.getTopping();      // a �� strTopping ��ȯ
	a.setTopping(b.getTopping());  // b �� strTopping�� a�� strTopping���� ����
	b.setTopping(strTemp);         // a �� strToppingf�� b strTopping�� ����
}

void swap(CPizza* a, CPizza* b) {

	string strTemp;                  // �ӽ� ���� ���� ����
	strTemp = a->getTopping();       // a �� strTopping ��ȯ
	a->setTopping(b->getTopping());  // b �� strTopping�� a�� strTopping���� ����
	b->setTopping(strTemp);          // a �� strToppingf�� b strTopping�� ����
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