#pragma once

class Color
{
	int red, blue, green;
public:
	Color();
	Color(int a, int b, int c);
	void show();
	friend Color operator+ (Color a, Color b);
	friend bool operator== (Color a, Color b);
};

