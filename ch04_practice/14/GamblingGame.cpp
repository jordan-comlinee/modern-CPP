#include "GamblingGame.h"
#include "Player.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

GamblingGame::GamblingGame() {
	for (int i = 0; i < 3; i++) num[i] = 0;
	srand((unsigned)time(0));  // new seed
}

bool GamblingGame::matchAll() { // num[] 배열의 수가 모두 일치하면 true 리턴
	for (int i = 0; i < 3; i++) {
		if (num[i] != num[0]) { // 하나라도 다르면 false
			return false;
		}
	}
	return true;
}

void GamblingGame::run() {
	cout << "***** 갬블링 게임을 시작합니다. *****" << endl;

	string name;
	cout << "첫번째 선수 이름>>";
	getline(cin, name);
	p[0].setName(name);

	cout << "두번째 선수 이름>>";
	getline(cin, name);
	p[1].setName(name);

	int i = 0;
	while (true) {
		cout << p[i].getName() + ":<Enter>";
		p[i].getEnterKey(); // 참가자가 enter키 입력할 때까지 기다림
		cout << "\t\t";
		for (int i = 0; i < 3; i++) {
			num[i] = rand() % 3; // 0~2까지의 임의의 수 발생
			cout << num[i] << '\t';
		}
		if (matchAll()) { // p[i]가 winner
			cout << p[i].getName() + "님 승리!!" << endl;
			return; // program exits
		}
		else {
			cout << "아쉽군요!" << endl;
		}

		i++;
		i %= 2; // next player
	}
}