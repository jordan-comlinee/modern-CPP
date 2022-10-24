#include "Circle.h"
#include <iostream>
using namespace std;

void increaseBy(Circle& a, Circle& b) {
    int r = a.getRadius() + b.getRadius();
    a.setRadius(r);
}


int main() {
    Circle x(10), y(5);
    increaseBy(x, y); // x의 반지름이 15인 원을 만들고자 한다. 
    x.show(); // "반지름이 15인 원"을 출력한다. 
}