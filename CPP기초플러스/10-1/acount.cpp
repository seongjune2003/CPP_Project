// account.cpp
#include <iostream>
#include <string>
#include "acount.h"
using namespace std;

BankAccount::BankAccount(string customer, string num, int bal) {		// �����ڸ� ���ؼ��� ������ ���ٰ����ϵ��� ���� (��������)
	swap(name, customer);									// å������ char*�� strcnpy�� �ٲٴ� �����̱��ѵ� �� string���� �غ�.
	swap(accountNumber, num);
	balance = bal;
}

void BankAccount::show(void) const{
	cout << "������: " << name << endl;
	cout << "���¹�ȣ: " << accountNumber << endl;
	cout << "�ܰ�: " << balance << endl;
}

void BankAccount::deposit(double cash) {
	if (cash >= 0) {
		balance += cash;
		cout << "�ԱݵǾ����ϴ�." << endl;
	}
	else
		cout << "�Ա��� ���� 1�� �̻� �Է��ؾ� �մϴ�.\n";
}

void BankAccount::withdraw(double cash) {
	if (balance >= cash) {
		balance -= cash;
		cout << "����� �Ϸ�Ǿ����ϴ�. ���� �ݾ�: " << balance << "��\n";
	}
	else
		cout << "�ܰ��� ���� ���� ����� �� �����ϴ�." << endl;
}
