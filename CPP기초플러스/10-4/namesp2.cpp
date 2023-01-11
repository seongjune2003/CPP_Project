// namesp2.cpp
#include <iostream>
#include "namesp2.h"
using namespace std;

namespace SALES {
	Sales::Sales() {
		double sales[Quaters] = { 0.0, 0.0, 0.0, 0.0 };
		double average = 0;
		double max = 0;
		double min = 0;
	}

	Sales::Sales(Sales& s, const double ar[], int n) {		// n�� ��б���� �Է�����
		if (n > Quaters)
			n = Quaters;

		for (int i = 0; i < n; i++)
			this->sales[i] = ar[i];

		if (n < Quaters) {
			do {
				this->sales[n] = 0;		// s.sales[n] �ص� ��� ����
				n++;
			} while (n != Quaters);
		}

		// ���
		double temp = 0;
		for (int i = 0; i < n; i++)		// �ٷ� ������ n�� 4���� ������
			temp += this->sales[i];
		this->average = temp / n;

		// �ִ�
		temp = 0;
		for (int i = 0; i < n; i++)
			if (this->sales[i] > temp)
				temp = this->sales[i];
		this->max = temp;

		// �ּڰ�
		temp = this->sales[0];
		for (int i = 1; i < n; i++)
			if (this->sales[i] < temp)
				temp = this->sales[i];
		this->min = temp;
	}

	void Sales::showSales() {
		for (int i = 0; i < Quaters; i++)
			cout << i + 1 << "�б� �Ǹž�: " << this->sales[i] << endl;
		cout << "��հ�: " << this->average << endl;
		cout << "�ִ�: " << this->max << endl;
		cout << "�ּڰ�: " << this->min << endl;
	}
}