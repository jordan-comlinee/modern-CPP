#include "CPizza.h"
#include <iostream>
#include <string>
using namespace std;

CPizza::CPizza() : CPizza(radius)
{
	radius = 1;
}
CPizza::CPizza(int radius = 1) {
	//this->radius는 생성자의 변수
	this->radius = radius;
}

void CPizza::setRadius(int radius) {
	this->radius = radius;
}

void CPizza::setTopping(string topping) {
	this->topping = topping;
}

int CPizza::getRadius() {
	return this->radius;
}

string CPizza::getTopping() {
	return this->topping;

}