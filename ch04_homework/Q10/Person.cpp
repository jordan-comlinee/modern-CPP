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
    cout << familyName << "가족은 다음과 같이 " << size << "명입니다." << endl;
    for (int i = 0; i < size; i++) {
        cout << p[i].getName() << '\t';
    }
    cout << endl;
}

Family::~Family() {
    delete[] p;
}

int main() {
    Family* simpson = new Family("Simpson", 3); // 3명으로 구성된 Simpson 가족 
    simpson->setName(0, "Mr. Simpson");
    simpson->setName(1, "Mrs. Simpson");
    simpson->setName(2, "Bart Simpson");
    simpson->show();
    delete simpson;
}
