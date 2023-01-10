// pe10-1.cpp -- BankAccount 클래스를 사용한다
// 은행 입출금 프로그램을 만드시오. 입금, 출금, 잔고확인 구현. 고객정보는 이름, 계좌번호, 잔고로 구성, (클래스, 정보은닉)
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
	
	std::cout << "프로그램 종료합니다.\n";
	return 0;
}
