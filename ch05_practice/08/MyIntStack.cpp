#include "MyIntStack.h"
#include <iostream>
using namespace std;

MyIntStack::MyIntStack(int size) {
    this->size = size;
    tos = 0;
    this->p = new int[size];
}

MyIntStack::MyIntStack(const MyIntStack& s) {
    this->size = s.size;
    this->tos = s.tos;
    this->p = new int[size];
    for (int i = 0; i < s.tos; i++)
        this->p[i] = s.p[i];
}

MyIntStack::~MyIntStack() {
    delete[] p;
}

bool MyIntStack::push(int n) {
    if (tos > size - 1)
        return false;
    else {
        p[tos] = n;
        tos++;
        return true;
    }
}

bool MyIntStack::pop(int& n) {
    tos--;
    if (tos < 0)
        return false;
    else {
        n = p[tos];
        return true;
    }
}

int main() {
    MyIntStack a(10);
    a.push(10);
    a.push(20);
    MyIntStack b = a; // 복사 생성 
    b.push(30);

    int n;
    a.pop(n); // 스택 a 팝 
    cout << "스택 a에서 팝한 값 " << n << endl;
    b.pop(n); // 스택 b 팝 
    cout << "스택 b에서 팝한 값 " << n << endl;
}









/*
MyIntStack::MyIntStack(int size) {
    this->size = size;
    p = new int[size];
    tos = 0;
}

MyIntStack::MyIntStack(const MyIntStack& s) {
    this->p = new int[s.size];
    this->size = s.size;
    this->tos = s.tos;
    for (int i = 0; i <= s.tos; i++)
        this->p[i] = s.p[i];
}

bool MyIntStack::push(int n) {
    if (tos > size)
        return false;
    else {
        p[tos++] = n;
        return true;
    }
}

bool MyIntStack::pop(int& n) {
    if (tos < 0)
        return false;
    else {
        n = p[--tos];
        return true;
    }
}

MyIntStack::~MyIntStack() {
    delete[] p;
    p = NULL;
}
*/


