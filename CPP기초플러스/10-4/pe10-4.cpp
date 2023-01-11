// pe10-4.cpp  // 9-4번 직원 분기별 판매액 프로그램이랑 내용은 같음. 배열에 저장된 입력값으로 값을 변경하는 프로그램을 만드시오. (this활용)
// 디폴트생성자, 생성자, showSales함수

#include <iostream>
#include "namesp2.h"
using namespace std;

int main() {
	using namespace SALES;

	double array[Quaters] = { 105.44, 203.44, 305.66, 507.66 };

	Sales tmp;

	cout << "판매사원 A의 분기별 판매액" << endl;
	Sales salesman_a = Sales(tmp, array, 5);
	salesman_a.showSales();

	cout << "판매사원 B의 분기별 판매액" << endl;		// 기존의 array의 값을 변경해서 사용
	for (int i = 0; i < Quaters; i++) {
		cout << i + 1 << "분기 판매액: ";
		cin >> array[i];
	}

	Sales salesman_b = Sales(tmp, array, Quaters);
	salesman_b.showSales();
	return 0;
}