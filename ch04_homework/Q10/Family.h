#pragma once
#include "Person.h"
#include <string>
using namespace std;


class Family {
    Person* p; // Person 배열 포인터 
    int size; // Person 배열의 크기. 가족 구성원 수 
    string familyName;
public:
    Family(string name, int size); // size 개수만큼 Person 배열 동적 생성 
    void show(); // 모든 가족 구성원 출력 
    void setName(int index, string name) { p[index].setName(name); }
    ~Family();
};
