#include "Buffer.h"
#include <iostream>
using namespace std;

Buffer& append(Buffer& buf, string text) {
    buf.add(text);
    return buf;
}

int main() {
    Buffer buf("Hello");
    Buffer& temp = append(buf, "Guys"); // buf�� ���ڿ��� "Guys" ������ 
    temp.print(); // "HelloGuys" ���
    buf.print(); // "HelloGuys" ���
}
