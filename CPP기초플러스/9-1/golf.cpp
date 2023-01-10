// golf.cpp   golf.h�� ���� ���� ����
#include <iostream>
#include <cstring>		// strcpy_s ���
#include "golf.h"
using namespace std;

// �̸��� �ԷµǸ� 1��ȯ, ��������� 0��ȯ
int setgolf(golf& g) {
	cout << "Ǯ������ �Է����ּ���.: ";
	cin.getline(g.fullname, len);
	if (g.fullname[0] == '\0')					// �Է¹��� �̸��� ù���ڰ� ��������� 0 ��ȯ. �ƴϸ� �ڵ�ĸ �Է� ����
		return 0;
	cout << g.fullname << "�� �ڵ�ĸ�� �Է��ϼ���: ";
	while (!(cin >> g.handicap)) {				// �Է��� ����� �ȵ�����. (���ڸ� �Է��ؾ��ϴµ� ���ڸ� �Է��� ���)
		cin.clear();							// ���۸� ����ְ�
		cout << "���ڸ� �Է��ؾ� �մϴ�. �ٽ� �Է��ϼ���: ";
	}
	while (cin.get() != '\n')		// ����� �Է��� ������ �� ���� �ݺ�.
		continue;
	return 1;						// �ȵ����� 1��ȯ (���������� �������� �ƴµ� ���� �̻� �ش��ϴ°� �߻���
}

// �־��� ������ �� ����
void setgolf(golf& g, const char* name, int hc) {			// char*��� �Ŵ� �� ��ü�� �迭�̱⵵ �ϰ� char* name�� name�� ������ �迭�� ù���ڸ� ����Ų��.
	strcpy_s(g.fullname, name);		// char[] �����̶� ==�� ���� �� ����. strcpy_s�� ��ߵ�
	g.handicap = hc;
}

// �־��� int������ �ڵ�ĸ ����
void handicap(golf& g, int hc) {
	g.handicap = hc;
}

// ������ ������
void showgolf(const golf& g) {
	cout << "�̸�: " << g.fullname << endl;
	cout << "handicap: " << g.handicap << endl << endl;
}
