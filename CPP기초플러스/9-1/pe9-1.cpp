// pe9-1.cpp	(main ������ �ֹ������ �����ϸ� ����.)
// ��������. ȸ���� Ǯ���Ӱ� �ڵ�ĸ�� �����ϴ� ����ü�� ����� �ش� ����ü�� �̸��� �����ϴ� �Լ�, �ڵ�ĸ ������ �����ϴ� �Լ��� ���� ����ÿ�. 
// + ���ڷ� �־��� �̸�, �ڵ�ĸ���� �����ϴ� �Լ�, ����ü�� ������ �����ִ� �Լ�

#include <iostream>
#include "golf.h"		// ������� ����. ��������� �����ϸ鼭 golf.cpp���� ������ �ȴ�.

const int Members = 5;
int main(void) {			// int main()�� ���� �Ű������� ����Ͽ� ȣ���� �� ������, int main(void)�� �Ű����� ���̸� ȣ���� ������
	using namespace std;
	golf team[Members];

	cout << Members << "���� ����ȸ��.\n";
	int i = 0;
	for (int i = 0; i < Members; i++)
		if (setgolf(team[i]) == 0)			// �̸� �Է��� ����� ���� ������ for�� ��������
			break;
	for (int j = 0; j < Members; j++)		// ** �̰� ����� �ȵǳ�? // �ǳ�? �� �ƴ� �ȵƴ�����?
		showgolf(team[j]);

	setgolf(team[0], "Lee", 5);
	showgolf(team[0]);
	handicap(team[0], 3);
	showgolf(team[0]);

	return 0;
}

