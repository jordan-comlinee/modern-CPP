#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cout << "���� ���ڿ��� �Է��ϼ���." << endl;
	// ���� ���ڿ� �Է�
	getline(cin, s, '\n');
	int sum = 0;
	int startIndex = 0;
	//���� �ݺ�
	while (true) {
		// ���� ���ڿ����� + �κ��� ã�´�.
		int fIndex = s.find('+', startIndex);
		// ���࿡ ���� ���ڿ����� ������ ���ٸ�
		if (fIndex == -1) {
			// part�� ���ڸ� �����Ѵ�.
			string part = s.substr(startIndex);
			// ���࿡ + ������ ���ڰ� ���ٸ�, if�� ����
			if (part == "")
				break;
			// part�� � �������� ����Ѵ�.
			cout << part << endl;
			// sum ������ part�� �����Ѵ�. stoi = string to int
			sum += stoi(part);
			// if�� ����
			break;
		}
		// ���꽺Ʈ������ �ڸ� ���� ����
		int count = fIndex - startIndex;
		// startIndex���� count ���� ���ڷ� ���꽺Ʈ��, ���ڿ��� �ڸ��ٴ� ��
		string part = s.substr(startIndex, count);
		cout << part << endl;
		// ���ڿ��� ���� ��ȯ�Ͽ� �����ش�.
		sum += stoi(part);
		// �˻��� ������ �ε����� ������Ų��.
		startIndex = fIndex + 1;
	}

	cout << "���ڵ��� ���� " << sum;

}