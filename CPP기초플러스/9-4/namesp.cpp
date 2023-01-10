// namesp.cpp
#include <iostream>
using namespace std;
#include "namesp.h"

namespace SALES {
	// 매개변수로 받은 배열의 인자를 복사하는 경우.  n의 크기에 따라
	void setSales(Sales& s, const double arr[], int n) {
		double temp;			// 아래에서 초기화
		
		if (Quaters < n)		// 4분기가 초과되면 4로 제한
			n = Quaters;

		for (int i = 0; i < n; i++)
			s.sales[i] = arr[i];

		if (Quaters > n) {		// n까지 했는데 Quaters - n 만큼 항목이 비어있으면 0으로 처리
			do {
				s.sales[n] = 0;
				n++;
			} while (n != Quaters);
		}

		// 평균
		temp = 0;
		for (int i = 0; i < n; i++)
			temp += s.sales[i];
		s.average = temp / n;

		// 최댓값
		temp = 0;
		for (int i = 0; i < n; i++)
			if (temp < s.sales[i])
				temp = s.sales[i];
		s.max = temp;

		// 최솟값
		temp = s.sales[0];
		for (int i = 1; i < n; i++)
			if (s.sales[i] < temp)
				temp = s.sales[i];
		s.min = temp;

	}

	// 사용자에게서 직접 입력받는 경우
	void setSales(Sales& s) {
		int temp;
		
		for (int i = 0; i < Quaters; i++) {
			cout << i + 1 << "분기 판매액을 입력하세요: " << endl;
			cin >> s.sales[i];
		}

		// 평균
		temp = 0;
		for (int i = 0; i < Quaters; i++)
			temp += s.sales[i];
		s.average = temp / Quaters;

		// 최댓값
		temp = 0;
		for (int i = 0; i < Quaters; i++)
			if (temp < s.sales[i])
				temp = s.sales[i];
		s.max = temp;

		// 최솟값
		temp = s.sales[0];
		for (int i = 1; i < Quaters; i++)
			if (s.sales[i] < temp)
				temp = s.sales[i];
		s.min = temp;
	}

	void showSales(Sales& s) {
		for (int i = 0; i < Quaters; i++)
			cout << i + 1 << "분기 판매액: " << s.sales[i] << endl;
		cout << "평균값: " << s.average << endl;
		cout << "최댓값: " << s.max << endl;
		cout << "최솟값: " << s.min << endl;
	}
}