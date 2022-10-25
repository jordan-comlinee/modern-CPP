#pragma once
#include <iostream>
using namespace std;

class Book {
    string title; // 제목 문자열 
    int price; // 가격 
public:
    Book(const Book& b);
    Book(const string title, int price);
    ~Book();
    void set(const string title, int price);
    void show() { cout << title << ' ' << price << "원" << endl; }
};


