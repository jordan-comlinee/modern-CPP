#include "Stack.h"
#include <iostream>
using namespace std;

int main() {
    Stack stack;
    stack << 3 << 5 << 10; // 3,5,10 순서대로 push 
    while (true) {
        if (!stack) break; //stack empty
        int x;
        stack >> x; //stack의 top에 있는 정수 pop 
        cout << x << ' ';
    }
    cout << endl;
}