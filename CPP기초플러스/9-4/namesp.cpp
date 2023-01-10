// namesp.cpp
#include <iostream>
using namespace std;
#include "namesp.h"

namespace SALES {
	// �Ű������� ���� �迭�� ���ڸ� �����ϴ� ���.  n�� ũ�⿡ ����
	void setSales(Sales& s, const double arr[], int n) {
		double temp;			// �Ʒ����� �ʱ�ȭ
		
		if (Quaters < n)		// 4�бⰡ �ʰ��Ǹ� 4�� ����
			n = Quaters;

		for (int i = 0; i < n; i++)
			s.sales[i] = arr[i];

		if (Quaters > n) {		// n���� �ߴµ� Quaters - n ��ŭ �׸��� ��������� 0���� ó��
			do {
				s.sales[n] = 0;
				n++;
			} while (n != Quaters);
		}

		// ���
		temp = 0;
		for (int i = 0; i < n; i++)
			temp += s.sales[i];
		s.average = temp / n;

		// �ִ�
		temp = 0;
		for (int i = 0; i < n; i++)
			if (temp < s.sales[i])
				temp = s.sales[i];
		s.max = temp;

		// �ּڰ�
		temp = s.sales[0];
		for (int i = 1; i < n; i++)
			if (s.sales[i] < temp)
				temp = s.sales[i];
		s.min = temp;

	}

	// ����ڿ��Լ� ���� �Է¹޴� ���
	void setSales(Sales& s) {
		int temp;
		
		for (int i = 0; i < Quaters; i++) {
			cout << i + 1 << "�б� �Ǹž��� �Է��ϼ���: " << endl;
			cin >> s.sales[i];
		}

		// ���
		temp = 0;
		for (int i = 0; i < Quaters; i++)
			temp += s.sales[i];
		s.average = temp / Quaters;

		// �ִ�
		temp = 0;
		for (int i = 0; i < Quaters; i++)
			if (temp < s.sales[i])
				temp = s.sales[i];
		s.max = temp;

		// �ּڰ�
		temp = s.sales[0];
		for (int i = 1; i < Quaters; i++)
			if (s.sales[i] < temp)
				temp = s.sales[i];
		s.min = temp;
	}

	void showSales(Sales& s) {
		for (int i = 0; i < Quaters; i++)
			cout << i + 1 << "�б� �Ǹž�: " << s.sales[i] << endl;
		cout << "��հ�: " << s.average << endl;
		cout << "�ִ�: " << s.max << endl;
		cout << "�ּڰ�: " << s.min << endl;
	}
}