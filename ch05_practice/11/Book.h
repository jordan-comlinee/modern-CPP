#pragma once
#include <iostream>
using namespace std;

class Book {
    string title; // ���� ���ڿ� 
    int price; // ���� 
public:
    Book(const Book& b);
    Book(const string title, int price);
    ~Book();
    void set(const string title, int price);
    void show() { cout << title << ' ' << price << "��" << endl; }
};


