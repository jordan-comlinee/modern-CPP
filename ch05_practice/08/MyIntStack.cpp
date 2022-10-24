#include "MyIntStack.h"
#include <iostream>
using namespace std;



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

int main() {
    MyIntStack a(10);
    a.push(10);
    a.push(20);
    MyIntStack b = a; // ���� ���� 
    b.push(30);

    int n;
    a.pop(n); // ���� a �� 
    cout << "���� a���� ���� �� " << n << endl;
    b.pop(n); // ���� b �� 
    cout << "���� b���� ���� �� " << n << endl;
}

