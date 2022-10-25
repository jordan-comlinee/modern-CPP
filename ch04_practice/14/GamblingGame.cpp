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

bool GamblingGame::matchAll() { // num[] �迭�� ���� ��� ��ġ�ϸ� true ����
	for (int i = 0; i < 3; i++) {
		if (num[i] != num[0]) { // �ϳ��� �ٸ��� false
			return false;
		}
	}
	return true;
}

void GamblingGame::run() {
	cout << "***** ���� ������ �����մϴ�. *****" << endl;

	string name;
	cout << "ù��° ���� �̸�>>";
	getline(cin, name);
	p[0].setName(name);

	cout << "�ι�° ���� �̸�>>";
	getline(cin, name);
	p[1].setName(name);

	int i = 0;
	while (true) {
		cout << p[i].getName() + ":<Enter>";
		p[i].getEnterKey(); // �����ڰ� enterŰ �Է��� ������ ��ٸ�
		cout << "\t\t";
		for (int i = 0; i < 3; i++) {
			num[i] = rand() % 3; // 0~2������ ������ �� �߻�
			cout << num[i] << '\t';
		}
		if (matchAll()) { // p[i]�� winner
			cout << p[i].getName() + "�� �¸�!!" << endl;
			return; // program exits
		}
		else {
			cout << "�ƽ�����!" << endl;
		}

		i++;
		i %= 2; // next player
	}
}