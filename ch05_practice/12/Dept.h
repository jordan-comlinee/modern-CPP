#pragma once
#include <iostream>
#include <string>
using namespace std;

class Dept {
    int size; // scores �迭�� ũ�� 
    int* scores; // ���� �Ҵ� ���� ���� �迭�� �ּ� 
public:
    Dept(int size) { // ������ 
        this->size = size;
        scores = new int[size];
    }
    Dept(const Dept& dept); // ���� ������ 
    ~Dept(); // �Ҹ��� 
    int getSize() { return size; }
    void read(); // size ��ŭ Ű���忡�� ������ �о� scores �迭�� ���� 
    bool isOver60(int index); // index�� �л��� ������ 60���� ũ�� true ���� 
};