// 문제 - 직원의 분기별 판매액을 입력받고 분기별 판매액, 평균, 최댓값, 최솟값을 출력하는 프로그램을 작성하시오. 
// (사용자에게서 입력방식, 매개변수 입력방식 2가지를 만들고 각각 사용해보세요)
// 필요한것 - 데이터를 입력받는 받는 함수 2개, 출력함수 1개, 데이터 저장 배열 하나, 네임스페이스 제작

#include <iostream>
#include "namesp.h"
using namespace std;

int main() {
	using namespace SALES;

	Sales salesman1, salesman2;
	double array[Quaters] = { 100.5, 89.4, 39.2, 78.4 };

	cout << "판매직원 A의 분기별 판매액" << endl;
	setSales(salesman1, array, 5);
	showSales(salesman1);

	cout << "판매직원 B의 분기별 판매액" << endl;
	setSales(salesman2);
	showSales(salesman2);
	return 0;
}