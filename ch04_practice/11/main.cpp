#include "CoffeeVendingMachine.h"
#include "Container.h"
#include <iostream>
using namespace std;

int main() {
    CoffeeVendingMachine* coffee = new CoffeeVendingMachine;
    coffee->run();
    delete coffee;
}
