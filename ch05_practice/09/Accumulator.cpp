#include "Accumulator.h"
#include <iostream>
using namespace std;





Accumulator::Accumulator(int value) {
    this->value = value;
}
Accumulator& Accumulator::add(int n) {
    this->value += n;
    return *this;
}

int Accumulator::get() {
    return value;
}

/*
Accumulator::Accumulator(int value) {
    this->value = value;
}

Accumulator& Accumulator::add(int n) {
    this->value += n;
    return *this;
}

int Accumulator::get() {
    return this->value;
}
*/

int main() {
    Accumulator acc(10);
    acc.add(5).add(6).add(7); // acc의 value 멤버가 28이 된다. 
    cout << acc.get(); // 28 출력 
}
