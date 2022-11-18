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
	LasorPrinter* samsung = new LasorPrinter(20, "SCX-6x45", "�Ｚ����", 3);
	cout << "�۵� ���� 2���� �����ʹ� ������ �����ϴ�." << endl;
	hp->show();
	samsung->show();

    while (true) {
        cout << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
        cin >> pnum >> pages;
        if (pnum == 1) {
            hp->printInkJet(pages);
        }
        if (pnum == 2) {
            samsung->printLaser(pages);
        }
        if (pnum != 1 && pnum != 2)
            cout << "�����͸� �߸� �����ϼ̽��ϴ�." << endl;
        hp->show();
        samsung->show();

        while (true) {
            cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
            cin >> yon;
            if (yon == 'n')
                return 0;
            else if (yon == 'y')
                break;
            else
                cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
        }

    }
    delete hp;
    delete samsung;
}