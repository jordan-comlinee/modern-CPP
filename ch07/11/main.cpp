#include "Stack.h"
#include <iostream>
using namespace std;

int main() {
    Stack stack;
    stack << 3 << 5 << 10; // 3,5,10 ������� push 
    while (true) {
        if (!stack) break; //stack empty
        int x;
        stack >> x; //stack�� top�� �ִ� ���� pop 
        cout << x << ' ';
    }
    cout << endl;
}