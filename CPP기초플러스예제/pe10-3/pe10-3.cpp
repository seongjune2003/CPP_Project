// ������ ���� ������ ����. Ǯ���Ӱ� �ڵ�ĸ�� �Է¹޴� Ŭ������ �ۼ��Ͻÿ�. this �����͸� ���� Ȱ���ϼ���.
// �ʿ��Ѱ� - ����Ʈ ������, (�Ű������� �޴�)������, ��ȭ������ �޴� ���� �Լ�(���), �ڵ�ĸ ������Ʈ �Լ�, show�Լ�
#include <iostream>
using namespace std;
#include "golf2.h"

const int Arsize = 5;		// �ڿ� �迭���鶧 �� ������

int main() {
	Golf me = Golf();
	me.showgolf();

	Golf ann = Golf("Ann Birdfree", 24);
	ann.showgolf();

	Golf andy, temp;
	andy.setgolf(temp);
	andy.showgolf();
	andy.updatehandicap();
	andy.showgolf();

	Golf golfers[Arsize];
	int i, j;

	for (i = 0; i < Arsize && golfers[i].setgolf(temp); i++);		// golfers[i].setgolf(temp)�Ѱ� 1�� ��ȯ�Ҷ� (True�϶�)
	for (j = 0; j < i; j++) {
		cout << "Golfer #" << j + 1 << endl;
		golfers[i].showgolf();
	}

	return 0;
}