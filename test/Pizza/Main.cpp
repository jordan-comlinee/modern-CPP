#include <iostream>
#include <string>
#include "Pizza.h"

using namespace std;

void swap(Pizza a, Pizza b) {
	string tmp;
	tmp = a.topping;
	a.topping = b.topping;
	b.topping = tmp;
}

void swap(Pizza* a, Pizza* b) {
	string tmp;
	tmp = a->topping ;
	a->topping = b->topping;
	b->topping = tmp;
}

int main(void) {
	Pizza blueberryPizza();
	Pizza strawberryPizza(5);
}
