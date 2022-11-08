#include "MyIntStack.h"
#include <iostream>
using namespace std;

MyIntStack::MyIntStack() {
    tos = 0;
}

bool MyIntStack::push(int n) {
    if (tos >= 10)
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

/*
MyIntStack::MyIntStack() {
    tos = 0;
}

bool MyIntStack::push(int n) {
    if (tos == 10)
        return false;
    else {
        p[tos] = n;
        tos++;
        return true;
    }
}

bool MyIntStack::pop(int& n) {
    tos--;
    if (tos == -1)
        return false;
    else {
        n = p[tos];
        return true;
    }

}
*/

int main() {
    MyIntStack a;
    for (int i = 0; i < 11; i++) { // 11���� Ǫ���ϸ�, ���������� stack full�� �ȴ�. 
        if (a.push(i)) cout << i << ' '; // Ǫ�õ� �� ���� 
        else cout << endl << i + 1 << " ��° stack full" << endl;
    }
    int n;
    for (int i = 0; i < 11; i++) { // 11���� ���ϸ�, ���������� stack empty�� �ȴ�. 
        if (a.pop(n)) cout << n << ' '; // �� �� �� ��� 
        else cout << endl << i + 1 << " ��° stack empty";
    }
    
    cout << endl;
}