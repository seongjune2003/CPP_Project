// namesp2.h
namespace SALES {
	const int Quaters = 4;
	class Sales {
	private:
		double sales[Quaters];
		double average;
		double max;
		double min;
	public:
		Sales();
		Sales(Sales& s, const double ar[], int n);
		void showSales();
	};
}
