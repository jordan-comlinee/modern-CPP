#include "Buffer.h"
#include <iostream>
using namespace std;

Buffer& append(Buffer& buf, string text) {
    buf.add(text);
    return buf;
}

int main() {
    Buffer buf("Hello");
    Buffer& temp = append(buf, "Guys"); // buf의 문자열에 "Guys" 덧붙임 
    temp.print(); // "HelloGuys" 출력
    buf.print(); // "HelloGuys" 출력
}
