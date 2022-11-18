#include "Printer.h"
#include "InkJetPrinter.h"
#include "LasorPrinter.h"
#include <iostream>
using namespace std;

int main() {
    int pnum;
    int pages;
    char yon;
	InkJetPrinter* hp = new InkJetPrinter(10, "Officjet V40", "HP", 5);
	LasorPrinter* samsung = new LasorPrinter(20, "SCX-6x45", "삼성전자", 3);
	cout << "작동 중인 2대의 프린터는 다음과 같습니다." << endl;
	hp->show();
	samsung->show();

    while (true) {
        cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
        cin >> pnum >> pages;
        if (pnum == 1) {
            hp->printInkJet(pages);
        }
        if (pnum == 2) {
            samsung->printLaser(pages);
        }
        if (pnum != 1 && pnum != 2)
            cout << "프린터를 잘못 선택하셨습니다." << endl;
        hp->show();
        samsung->show();

        while (true) {
            cout << "계속 프린트 하시겠습니까(y/n)>>";
            cin >> yon;
            if (yon == 'n')
                return 0;
            else if (yon == 'y')
                break;
            else
                cout << "잘못 입력하셨습니다." << endl;
        }

    }
    delete hp;
    delete samsung;
}