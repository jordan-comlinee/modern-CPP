#pragma once
class Container {               // �� �ϳ��� ��Ÿ���� Ŭ���� 
    int size;                   // ���� ���� ��, �ִ� ���差�� 10 
public:
    Container() { size = 10; }
    void fill();                // �ִ뷮(10)���� ä��� 
    void consume();             // 1 ��ŭ �Ҹ��ϱ� 
    int getSize();              // ���� ũ�� ���� 
};