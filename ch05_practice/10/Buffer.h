#pragma once
#include <string>
#include <iostream>
using namespace std;

class Buffer {
    string text;
public:
    Buffer(string text) { this->text = text; }
    void add(string next) { text += next; } // text�� next ���ڿ� �����̱� 
    void print() { cout << text << endl; }
};

