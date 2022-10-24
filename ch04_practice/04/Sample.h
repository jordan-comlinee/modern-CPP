#pragma once
class Sample
{
	int* p;
	int size;
public:
	Sample(int n);
	void read();
	void write();
	int big();
	~Sample();
};

