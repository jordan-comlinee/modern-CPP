#pragma once
#include<iostream>
using namespace std;

class Stack {
    int stack[10];
    int top;
public:
    Stack();
    Stack& operator<< (int num);
    bool operator! ();
    Stack operator>> (int& x);
};