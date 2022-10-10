#pragma once
#include "Person.h"
#include <string>
using namespace std;


class Family {
    Person* p; // Person �迭 ������ 
    int size; // Person �迭�� ũ��. ���� ������ �� 
    string familyName;
public:
    Family(string name, int size); // size ������ŭ Person �迭 ���� ���� 
    void show(); // ��� ���� ������ ��� 
    void setName(int index, string name) { p[index].setName(name); }
    ~Family();
};
