#pragma once
#include <iostream>
#include <string>
using namespace std;

class Player {
	string name;
public:
	Player(string name = "") {
		this->name = name;
	}
	void setName(string name) { this->name = name; }
	string getName() { return name; }
	void getEnterKey() { // <Enter> Ű�� �ԷµǸ� ����
		char buf[100];
		cin.getline(buf, 99); // wait <Enter> key 
	}
};

