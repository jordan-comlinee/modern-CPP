#include "Dept.h"
#include <iostream>
#include <string>
using namespace std;


// 참조 연산자 이용...Dept &dept로 바꾸면 복사 생성자 사용하지 않아도 바로 사용 가능
int countPass(Dept& dept) { // dept 학과에 60점 이상으로 통과하는 학생의 수 리턴 
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
    cout << size << "개 점수 입력>> ";
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
    cout << this->size << "개 정수 입력>> ";
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
    // 복사 생성자를 만들 때에는 클래스 내 멤버 변수 모두 복사해야 함... 그리고 할당!! 그게 바로 깊은 복사
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
    Dept com(10); // 총 10명이 있는 학과 com 
    com.read();  // 총 10명의 학생들의 성적을 키보드로부터 읽어 scores 배열에 저장 
    int n = countPass(com); // com 학과에 60점 이상으로 통과한 학생의 수를 리턴 
    cout << "60점 이상은 " << n << "명";
}
