#include "Player.h"
#include <iostream>
#pragma once
using namespace std;

class GamblingGame {
	Player p[2]; // 2 명의 선수
	int num[3]; // 랜덤하게 생성된 3 개의 수를 저장하는 배열
	bool matchAll(); // num[] 배열의 수가 모두 일치하면 true 리턴
public:
	GamblingGame();
	void run();
};

