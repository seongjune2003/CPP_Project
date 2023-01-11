// golf.cpp  Golf Ŭ������ �Լ� ����
#include <iostream>
#include "golf2.h"
using namespace std;

Golf::Golf() {
	strcpy_s(fullname, 20, "no name");		// null �ڸ�
	handicap = 0;
}

// �Ű������� �־��� ������ Golf ����ü ����
Golf::Golf(const char* name, int hc) {
	strcpy_s(fullname, 20, name);
	sethandicap(hc);
}

// ����ڿ��Լ� �Է¹���. �̸��� �ԷµǸ� 1��ȯ, �Էµ��� ������ 0��ȯ
int Golf::setgolf(Golf& g) {
	cout << "Ǯ������ �Է��ϼ���.: ";
	cin.get(g.fullname, Len);			// Ǯ������ �ִ� Len ���̸�ŭ �Է¹���.
	if (strcmp(g.fullname, "") == 0)	// strcmp�� �� ���ڰ� ������ 0 ��ȯ
		return 0;

	cout << "�ڵ�ĸ�� �Է��ϼ���: ";
	cin >> g.handicap;
	cin.clear();
	while (cin.get() != '\n')		// ���۰� ����������� �����
		continue;

	*this = Golf(g.fullname, g.handicap);		// *this��� �� Golf ������ g�� ���� ����. �̰� ���� Golf(const char* name, int hc) �Լ��� ���� ���� �����ϰڴ�.
	return 1;
}

void Golf::sethandicap(int hc) {
	this->handicap = hc;			// �̷��� �ᵵ �ǰ�, handicap = hc; �̷��� �ᵵ ����� ����. this->handicap�� ���� ������ �Ű������� ���� �̸��� ���� �����ϱ� ���ؼ� this�� ����ϴ� ����.
}

// ��ȭ������ �ڵ�ĸ�� �Է¹���
void Golf::updatehandicap() {
	int handi;
	cout << this->fullname << "�� �ڵ�ĸ�� �Է��ϼ���: ";
	cin >> handi;
	handicap = handi;
	cin.clear();
	while (cin.get() != '\n')
		continue;
}

void Golf::showgolf() const {
	cout << "���۸�: " << fullname << endl;
	cout << "�ڵ�ĸ: " << handicap << endl;
}
