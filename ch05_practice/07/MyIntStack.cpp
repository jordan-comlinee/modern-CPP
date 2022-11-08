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
    for (int i = 0; i < 11; i++) { // 11개를 푸시하면, 마지막에는 stack full이 된다. 
        if (a.push(i)) cout << i << ' '; // 푸시된 값 에코 
        else cout << endl << i + 1 << " 번째 stack full" << endl;
    }
    int n;
    for (int i = 0; i < 11; i++) { // 11개를 팝하면, 마지막에는 stack empty가 된다. 
        if (a.pop(n)) cout << n << ' '; // 팝 한 값 출력 
        else cout << endl << i + 1 << " 번째 stack empty";
    }
    
    cout << endl;
}