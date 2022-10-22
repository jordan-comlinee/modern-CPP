#pragma once
class MyVector
{
	int* p;
	int size;
public:
	MyVector(int n = 100) { 
		p = new int[n];
		size = n;
	}
	~MyVector() { delete[] p; }
};

