// account.cpp
#include <iostream>
#include <string>
#include "acount.h"
using namespace std;

BankAccount::BankAccount(string customer, string num, int bal) {		// 생성자를 통해서만 정보에 접근가능하도록 제한 (정보은닉)
	swap(name, customer);									// 책에서는 char*를 strcnpy로 바꾸는 형식이긴한데 난 string으로 해봄.
	swap(accountNumber, num);
	balance = bal;
}

void BankAccount::show(void) const{
	cout << "고객성함: " << name << endl;
	cout << "계좌번호: " << accountNumber << endl;
	cout << "잔고: " << balance << endl;
}

void BankAccount::deposit(double cash) {
	if (cash >= 0) {
		balance += cash;
		cout << "입금되었습니다." << endl;
	}
	else
		cout << "입금할 돈은 1원 이상 입력해야 합니다.\n";
}

void BankAccount::withdraw(double cash) {
	if (balance >= cash) {
		balance -= cash;
		cout << "출금이 완료되었습니다. 남은 금액: " << balance << "원\n";
	}
	else
		cout << "잔고보다 많은 돈을 출금할 수 없습니다." << endl;
}
