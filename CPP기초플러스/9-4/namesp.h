// namesp.h
namespace SALES {
	const int Quaters = 4;
	struct Sales {
		double sales[Quaters];
		double average;
		double max;
		double min;
	};

	// �Ű������� �޴� ���
	// 4�� n �߿��� �� ���� ������ �׸���
	// �迭 ar�κ��� s�� sales ����� �����Ѵ�.
	// �Էµ� �׸���� �������� ���, �ִ�, �ּڰ��� ���Ѵ�.
	// sales�� ������ ���Ұ� ���� ��� 0���� �Է�
	void setSales(Sales& s, const double arr[], int n);

	// ��ȭ�� ���
	// 1,2,3,4 �б� �Ǹž� ������ ����ڷκ��� �Է¹���
	// s�� sales ����� ����
	// ��հ�, �ִ�, �ּڰ��� ����Ͽ� ����
	void setSales(Sales& s);

	// s ����ü�� ����ִ� ��� ������ ���
	void showSales(Sales& s);
}