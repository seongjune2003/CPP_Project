// namesp2.cpp
#include <iostream>
#include "namesp2.h"
using namespace std;

namespace SALES {
	Sales::Sales() {
		double sales[Quaters] = { 0.0, 0.0, 0.0, 0.0 };
		double average = 0;
		double max = 0;
		double min = 0;
	}

	Sales::Sales(Sales& s, const double ar[], int n) {		// n은 몇분기까지 입력할지
		if (n > Quaters)
			n = Quaters;

		for (int i = 0; i < n; i++)
			this->sales[i] = ar[i];

		if (n < Quaters) {
			do {
				this->sales[n] = 0;		// s.sales[n] 해도 상관 없음
				n++;
			} while (n != Quaters);
		}

		// 평균
		double temp = 0;
		for (int i = 0; i < n; i++)		// 바로 위에서 n이 4까지 증가함
			temp += this->sales[i];
		this->average = temp / n;

		// 최댓값
		temp = 0;
		for (int i = 0; i < n; i++)
			if (this->sales[i] > temp)
				temp = this->sales[i];
		this->max = temp;

		// 최솟값
		temp = this->sales[0];
		for (int i = 1; i < n; i++)
			if (this->sales[i] < temp)
				temp = this->sales[i];
		this->min = temp;
	}

	void Sales::showSales() {
		for (int i = 0; i < Quaters; i++)
			cout << i + 1 << "분기 판매액: " << this->sales[i] << endl;
		cout << "평균값: " << this->average << endl;
		cout << "최댓값: " << this->max << endl;
		cout << "최솟값: " << this->min << endl;
	}
}