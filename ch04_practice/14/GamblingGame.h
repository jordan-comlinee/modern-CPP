#include "Player.h"
#include <iostream>
#pragma once
using namespace std;

class GamblingGame {
	Player p[2]; // 2 ���� ����
	int num[3]; // �����ϰ� ������ 3 ���� ���� �����ϴ� �迭
	bool matchAll(); // num[] �迭�� ���� ��� ��ġ�ϸ� true ����
public:
	GamblingGame();
	void run();
};

