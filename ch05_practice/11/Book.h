#pragma once
#include <iostream>
using namespace std;

class Book {
    char* title; // 제목 문자열 
    int price; // 가격 
public:
    Book(const Book& b);
    Book(const char* title, int price);
    ~Book();
    void set(const char* title, int price);
    void show() { cout << title << ' ' << price << "원" << endl; }
};


