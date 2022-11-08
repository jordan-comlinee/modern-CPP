#pragma once
using namespace std;

class Color
{
	int red, blue, green;
public:
	Color();
	Color(int a, int b, int c);
	void show();
	Color operator+ (Color b);
	bool operator== (Color a);
};

