// namesp.h
namespace SALES {
	const int Quaters = 4;
	struct Sales {
		double sales[Quaters];
		double average;
		double max;
		double min;
	};

	// 매개변수로 받는 경우
	// 4와 n 중에서 더 작은 개수의 항목을
	// 배열 ar로부터 s의 sales 멤버로 복사한다.
	// 입력된 항목들을 바탕으로 평균, 최댓값, 최솟값을 구한다.
	// sales의 나머지 원소가 있을 경우 0으로 입력
	void setSales(Sales& s, const double arr[], int n);

	// 대화식 방법
	// 1,2,3,4 분기 판매액 정보를 사용자로부터 입력받음
	// s의 sales 멤버에 저장
	// 평균값, 최댓값, 최솟값을 계산하여 저장
	void setSales(Sales& s);

	// s 구조체에 들어있는 모든 정보를 출력
	void showSales(Sales& s);
}