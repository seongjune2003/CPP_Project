// ���� - ������ �б⺰ �Ǹž��� �Է¹ް� �б⺰ �Ǹž�, ���, �ִ�, �ּڰ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
// (����ڿ��Լ� �Է¹��, �Ű����� �Է¹�� 2������ ����� ���� ����غ�����)
// �ʿ��Ѱ� - �����͸� �Է¹޴� �޴� �Լ� 2��, ����Լ� 1��, ������ ���� �迭 �ϳ�, ���ӽ����̽� ����

#include <iostream>
#include "namesp.h"
using namespace std;

int main() {
	using namespace SALES;

	Sales salesman1, salesman2;
	double array[Quaters] = { 100.5, 89.4, 39.2, 78.4 };

	cout << "�Ǹ����� A�� �б⺰ �Ǹž�" << endl;
	setSales(salesman1, array, 5);
	showSales(salesman1);

	cout << "�Ǹ����� B�� �б⺰ �Ǹž�" << endl;
	setSales(salesman2);
	showSales(salesman2);
	return 0;
}