#include <iostream>
using namespace std;

class Product
{
public:
	double m_nID;
	// �ּ���� ���� �� memory leak �߻���....�����ڴ� 2���ε� �Ҹ��ڰ� 1���� ȣ��� (�ڽ� Ŭ������ �������� ����. ���� virtual�� �տ� �� �ٿ��־�� ��!!)
	//virtual void print() { cout << "Product Info" << endl; }
	void print() { cout << "Product Info" << endl; }
	Product() { cout << "Called Product Collection" << endl; }
	//~Product() { cout << "Called Product Destruction" << endl; }
	virtual ~Product() { cout << "Called Product Destruction" << endl; }
};

class Book : public Product
{
public:
	double m_nISBN;
	//void print() override { cout << "Book Info" << endl; }
	void print() { cout << "Book Info" << endl; }
	Book() { cout << "Called Book Collection" << endl; }
	//~Book() { cout << "Called Book Destruction" << endl; }
	virtual ~Book() { cout << "Called Book Destruction" << endl; }
};

int main() {
	
	double type = 0;
	Product* proPtr = new Book;
	//Book myBook;
	proPtr->print();
	delete proPtr;


	return 0;
}