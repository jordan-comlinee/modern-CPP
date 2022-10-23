#pragma once
class Random
{
public:
	~Random();
	int nextEven();
	int nextOdd();
	int nextInRangeEven(int start, int end);
	int nextInRangeOdd(int start, int end);
};

