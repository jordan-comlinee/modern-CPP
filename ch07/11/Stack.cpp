#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack() {
    top = 0;
}

Stack& Stack::operator<< (int num) {
    stack[top] = num;
    top++;
    return *this;
}

bool Stack::operator! () {
    if (top)
        return false;
    return true;
}

Stack Stack::operator>> (int& x) {
    x = stack[top - 1];
    top--;
    return *this;
}