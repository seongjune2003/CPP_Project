// pe10-1.cpp -- BankAccount Ŭ������ ����Ѵ�
// ���� ����� ���α׷��� ����ÿ�. �Ա�, ���, �ܰ�Ȯ�� ����. �������� �̸�, ���¹�ȣ, �ܰ�� ����, (Ŭ����, ��������)
#include <iostream>
#include "acount.h"

int main() {
	BankAccount first;
	BankAccount second("Seong june", "ABC345", 100);

	first.show();
	second.show();
	first = BankAccount("Min", "BDG789", 500);
	first.show();
	second.deposit(700);
	second.show();
	second.withdraw(350);
	second.show();
	second.withdraw(800);
	
	std::cout << "���α׷� �����մϴ�.\n";
	return 0;
}
