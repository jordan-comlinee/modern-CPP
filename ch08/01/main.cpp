#include <iostream>
#include <string>
#include "Product.h"
#include "Book.h"
#include "CompactDisk.h"
#include "ConversationBook.h"
using namespace std;

int main() {
	cout << "--------프로그램 작동 시작--------" << endl;
	//상품 리스트 생성, 이 때는 안에 있는 값은 모두 쓰레기값으로 채워진다.
	void* p[100];
	//상품 리스트 NULL로 초기화
	for (int i = 0; i < 100; i++)
		p[i] = NULL;


	p[0] = new CompactDisk(1, "Nxde", "(여자)IDLE", 0, 15000, "cube", "따끈따끈 신상");
	//((CompactDisk*)p[0])->showCompactDisk();

	p[1] = new Book(2, "0001", "이소영", "파스타먹으러가야지", 1, 1000, "소영", "종강원해");
	//((Book*)p[1])->showBook();

	p[2] = new ConversationBook(3, "Korean", "0002", "이수진", "빠른 종강 기원", 2, 5000, "수진", "조종강!");
	//((ConversationBook*)p[2])->showConversationBook();


	Product* prd = NULL;

	for (int i = 0; i < 100; i++) {
		prd = (Product*)p[i];
		if (p[i] == NULL)
			break; 
		if (prd->type == 1) {
			CompactDisk* pDisk = (CompactDisk*)p[i];
		}
		if (prd->type == 2) {
			Book* pDisk = (Book*)p[i];
		}
		if (prd->type == 3) {
			ConversationBook* pDisk = (ConversationBook*)p[i];
		}
	}

	/*
	cout << "상품 추가 : (1) 상품 조회 : (2) 상품 삭제 : (3)" << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "상품 추가를 선택하셨습니다." << endl;
		break;
	case 2:
		cout << "상품 조회를 선택하셨습니다." << endl;
		break;
	case 3:
		cout << "상품 삭제를 선택하셨습니다." << endl;
	default:
		break;
	}
	*/

	return 0;

}