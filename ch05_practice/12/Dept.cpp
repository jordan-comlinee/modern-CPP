#include "Dept.h"
#include <iostream>
#include <string>
using namespace std;


// ���� ������ �̿�...Dept &dept�� �ٲٸ� ���� ������ ������� �ʾƵ� �ٷ� ��� ����
int countPass(Dept& dept) { // dept �а��� 60�� �̻����� ����ϴ� �л��� �� ���� 
    int count = 0;
    for (int i = 0; i < dept.getSize(); i++) {
        if (dept.isOver60(i)) count++;
    }
    return count;
}

Dept::~Dept() {
    delete[] scores;
}

void Dept::read() {
    cout << size << "�� ���� �Է�>> ";
    for (int i = 0; i < size; i++) {
        cin >> this->scores[i];
    }
}

bool Dept::isOver60(int index) {
    if (this->scores[index] >= 60)
        return true;
    else
        return false;
}
























/*
void Dept::read() {
    cout << this->size << "�� ���� �Է�>> ";
    for (int i = 0; i < size; i++) {
        cin >> scores[i];
    }
}

bool Dept::isOver60(int index) {
    if (this->scores[index] > 60)
        return true;
    else
        return false;
}

Dept::Dept(const Dept& dept) {
    // ���� �����ڸ� ���� ������ Ŭ���� �� ��� ���� ��� �����ؾ� ��... �׸��� �Ҵ�!! �װ� �ٷ� ���� ����
    this->size = dept.size;
    this->scores = new int[this->size];
    for (int i = 0; i < this->size; i++)
        this->scores[i] = dept.scores[i];
}

Dept::~Dept() {
    //delete []scores;
}
*/

int main() {
    Dept com(10); // �� 10���� �ִ� �а� com 
    com.read();  // �� 10���� �л����� ������ Ű����κ��� �о� scores �迭�� ���� 
    int n = countPass(com); // com �а��� 60�� �̻����� ����� �л��� ���� ���� 
    cout << "60�� �̻��� " << n << "��";
}
