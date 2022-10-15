#include "Person.h"
#include "Family.h"
#include <iostream>
#include <string>
using namespace std;

Family::Family(string name, int size) {
    p = new Person[size];
    this->familyName = name;
    this->size = size;
}

void Family::show() {
    cout << familyName << "������ ������ ���� " << size << "���Դϴ�." << endl;
    for (int i = 0; i < size; i++) {
        cout << p[i].getName() << '\t';
    }
    cout << endl;
}

Family::~Family() {
    delete[] p;
}

int main() {
    Family* simpson = new Family("Simpson", 3); // 3������ ������ Simpson ���� 
    simpson->setName(0, "Mr. Simpson");
    simpson->setName(1, "Mrs. Simpson");
    simpson->setName(2, "Bart Simpson");
    simpson->show();
    delete simpson;
}
