// acount.h
#ifndef ACCOUNT_H_
#define ACCOUNT_H_
using namespace std;

class BankAccount {
private:
	string name;
	string accountNumber;
	int balance;
public:
	BankAccount(string customer = "no one", string num = "0", int bal = 0.0);
	void show(void) const;		// 매개변수 인자 안받을거고 값변경 안할거니 const로 선언
	void deposit(double cash);
	void withdraw(double cash);
};


#endif