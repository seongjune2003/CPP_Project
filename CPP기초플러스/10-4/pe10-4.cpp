// pe10-4.cpp  // 9-4�� ���� �б⺰ �Ǹž� ���α׷��̶� ������ ����. �迭�� ����� �Է°����� ���� �����ϴ� ���α׷��� ����ÿ�. (thisȰ��)
// ����Ʈ������, ������, showSales�Լ�

#include <iostream>
#include "namesp2.h"
using namespace std;

int main() {
	using namespace SALES;

	double array[Quaters] = { 105.44, 203.44, 305.66, 507.66 };

	Sales tmp;

	cout << "�ǸŻ�� A�� �б⺰ �Ǹž�" << endl;
	Sales salesman_a = Sales(tmp, array, 5);
	salesman_a.showSales();

	cout << "�ǸŻ�� B�� �б⺰ �Ǹž�" << endl;		// ������ array�� ���� �����ؼ� ���
	for (int i = 0; i < Quaters; i++) {
		cout << i + 1 << "�б� �Ǹž�: ";
		cin >> array[i];
	}

	Sales salesman_b = Sales(tmp, array, Quaters);
	salesman_b.showSales();
	return 0;
}