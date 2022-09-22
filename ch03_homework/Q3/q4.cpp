#include <iostream>
#include <string>
#include "CoffeeMachine.h"

using namespace std;

int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugerCoffee();
	java.show();
	java.fill();
	java.show();
	return 0;
}